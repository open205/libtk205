#ifndef RS0005_H_
#define RS0005_H_
#include <ASHRAE205.h>
#include <RS0006.h>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include <typeinfo_205.h>
#include <rs_instance_base.h>
#include <performance_map_base.h>
#include <grid_variables_base.h>
#include <lookup_variables_base.h>

/// @note  This class has been auto-generated. Local changes will not be saved!

namespace tk205  {

	namespace RS0005_NS  {
	
		class ProductInformation  {
		public:
			std::string manufacturer;
			ASHRAE205_NS::Pattern model_number;
			double nominal_voltage;
			double nominal_frequency;
			bool manufacturer_is_set;
			bool model_number_is_set;
			bool nominal_voltage_is_set;
			bool nominal_frequency_is_set;
			const static std::string_view manufacturer_units;
			const static std::string_view model_number_units;
			const static std::string_view nominal_voltage_units;
			const static std::string_view nominal_frequency_units;
			const static std::string_view manufacturer_description;
			const static std::string_view model_number_description;
			const static std::string_view nominal_voltage_description;
			const static std::string_view nominal_frequency_description;
			const static std::string_view manufacturer_name;
			const static std::string_view model_number_name;
			const static std::string_view nominal_voltage_name;
			const static std::string_view nominal_frequency_name;
		};
		class Description  {
		public:
			RS0005_NS::ProductInformation product_information;
			bool product_information_is_set;
			const static std::string_view product_information_units;
			const static std::string_view product_information_description;
			const static std::string_view product_information_name;
		};
		class GridVariables  : public grid_variables_base {
		public:
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				shaft_power_index,
				shaft_rotational_speed_index,
				index_count
			};
			std::vector<double> shaft_power;
			std::vector<double> shaft_rotational_speed;
			bool shaft_power_is_set;
			bool shaft_rotational_speed_is_set;
			const static std::string_view shaft_power_units;
			const static std::string_view shaft_rotational_speed_units;
			const static std::string_view shaft_power_description;
			const static std::string_view shaft_rotational_speed_description;
			const static std::string_view shaft_power_name;
			const static std::string_view shaft_rotational_speed_name;
		};
		struct LookupVariables  : public lookup_variables_base {
		
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				efficiency_index,
				power_factor_index,
				index_count
			};
			std::vector<double> efficiency;
			std::vector<double> power_factor;
			bool efficiency_is_set;
			bool power_factor_is_set;
			const static std::string_view efficiency_units;
			const static std::string_view power_factor_units;
			const static std::string_view efficiency_description;
			const static std::string_view power_factor_description;
			const static std::string_view efficiency_name;
			const static std::string_view power_factor_name;
		};
		struct LookupVariablesStruct {
			double efficiency;
			double power_factor;
		};
		class PerformanceMap  : public performance_map_base {
		public:
			void Initialize (const nlohmann::json& j) override;
			RS0005_NS::GridVariables grid_variables;
			RS0005_NS::LookupVariables lookup_variables;
			bool grid_variables_is_set;
			bool lookup_variables_is_set;
			const static std::string_view grid_variables_units;
			const static std::string_view lookup_variables_units;
			const static std::string_view grid_variables_description;
			const static std::string_view lookup_variables_description;
			const static std::string_view grid_variables_name;
			const static std::string_view lookup_variables_name;
			using performance_map_base::Calculate_performance;
			LookupVariablesStruct Calculate_performance (double shaft_power, double shaft_rotational_speed);
		};
		class Performance  {
		public:
			double maximum_power;
			double standby_power;
			int number_of_poles;
			RS0006_NS::RS0006 drive_representation;
			RS0005_NS::PerformanceMap performance_map;
			bool maximum_power_is_set;
			bool standby_power_is_set;
			bool number_of_poles_is_set;
			bool drive_representation_is_set;
			bool performance_map_is_set;
			const static std::string_view maximum_power_units;
			const static std::string_view standby_power_units;
			const static std::string_view number_of_poles_units;
			const static std::string_view drive_representation_units;
			const static std::string_view performance_map_units;
			const static std::string_view maximum_power_description;
			const static std::string_view standby_power_description;
			const static std::string_view number_of_poles_description;
			const static std::string_view drive_representation_description;
			const static std::string_view performance_map_description;
			const static std::string_view maximum_power_name;
			const static std::string_view standby_power_name;
			const static std::string_view number_of_poles_name;
			const static std::string_view drive_representation_name;
			const static std::string_view performance_map_name;
		};
		class RS0005  : public rs_instance_base {
		public:
			void Initialize (const nlohmann::json& j) override;
			ASHRAE205_NS::Metadata metadata;
			RS0005_NS::Description description;
			RS0005_NS::Performance performance;
			bool metadata_is_set;
			bool description_is_set;
			bool performance_is_set;
			const static std::string_view metadata_units;
			const static std::string_view description_units;
			const static std::string_view performance_units;
			const static std::string_view metadata_description;
			const static std::string_view description_description;
			const static std::string_view performance_description;
			const static std::string_view metadata_name;
			const static std::string_view description_name;
			const static std::string_view performance_name;
		};
		void from_json (const nlohmann::json& j, RS0005& x);
		void from_json (const nlohmann::json& j, Description& x);
		void from_json (const nlohmann::json& j, ProductInformation& x);
		void from_json (const nlohmann::json& j, Performance& x);
		void from_json (const nlohmann::json& j, PerformanceMap& x);
		void from_json (const nlohmann::json& j, GridVariables& x);
		void from_json (const nlohmann::json& j, LookupVariables& x);
	}
}
#endif

