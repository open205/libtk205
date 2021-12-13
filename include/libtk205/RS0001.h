#ifndef RS0001_H_
#define RS0001_H_
#include <ASHRAE205.h>
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

	namespace RS0001_NS  {
	
		enum class AHRI550590TestStandardYear {
			IP_2015,
			IP_2015_ADDENDUM_1,
			IP_2018,
			IP_2020,
			UNKNOWN
		};
		const static std::unordered_map<AHRI550590TestStandardYear, enum_info> AHRI550590TestStandardYear_info {
			{AHRI550590TestStandardYear::IP_2015, {"IP_2015", "AHRI 550/590 2015", "Ratings and design points defined using IP unit version of the standard, 2015 edition[@AHRI5502015]"}},
			{AHRI550590TestStandardYear::IP_2015_ADDENDUM_1, {"IP_2015_ADDENDUM_1", "AHRI 550/590 2015 Addendum 1", "Ratings and design points defined using IP unit version of the standard, 2015 edition with Addendum 1[@AHRI550A12015]"}},
			{AHRI550590TestStandardYear::IP_2018, {"IP_2018", "AHRI 550/590 2018", "Ratings and design points defined using IP unit version of the standard, 2018 edition[@AHRI5502018]"}},
			{AHRI550590TestStandardYear::IP_2020, {"IP_2020", "AHRI 550/590 2020", "Ratings and design points defined using IP unit version of the standard, 2020 edition[@AHRI5502020]"}},
			{AHRI550590TestStandardYear::UNKNOWN, {"UNKNOWN", "None","None"}}
		};
		enum class AHRI551591TestStandardYear {
			SI_2015,
			SI_2015_ADDENDUM_1,
			SI_2018,
			UNKNOWN
		};
		const static std::unordered_map<AHRI551591TestStandardYear, enum_info> AHRI551591TestStandardYear_info {
			{AHRI551591TestStandardYear::SI_2015, {"SI_2015", "AHRI 551/591 2015", "Ratings and design points defined using SI unit version of the standard, 2015 edition[@AHRI5512015]"}},
			{AHRI551591TestStandardYear::SI_2015_ADDENDUM_1, {"SI_2015_ADDENDUM_1", "AHRI 551/591 2015 Addendum 1", "Ratings and design points defined using SI unit version of the standard, 2015 edition with Addendum 1[@AHRI551A12015]"}},
			{AHRI551591TestStandardYear::SI_2018, {"SI_2018", "AHRI 551/591 2018", "Ratings and design points defined using SI unit version of the standard, 2018 edition[@AHRI5512018]"}},
			{AHRI551591TestStandardYear::UNKNOWN, {"UNKNOWN", "None","None"}}
		};
		class ProductInformation  {
		public:
			std::string manufacturer;
			ASHRAE205_NS::Pattern model_number;
			double nominal_voltage;
			double nominal_frequency;
			ASHRAE205_NS::CompressorType compressor_type;
			std::string liquid_data_source;
			std::string refrigerant;
			bool hot_gas_bypass_installed;
			bool manufacturer_is_set;
			bool model_number_is_set;
			bool nominal_voltage_is_set;
			bool nominal_frequency_is_set;
			bool compressor_type_is_set;
			bool liquid_data_source_is_set;
			bool refrigerant_is_set;
			bool hot_gas_bypass_installed_is_set;
			const static std::string_view manufacturer_units;
			const static std::string_view model_number_units;
			const static std::string_view nominal_voltage_units;
			const static std::string_view nominal_frequency_units;
			const static std::string_view compressor_type_units;
			const static std::string_view liquid_data_source_units;
			const static std::string_view refrigerant_units;
			const static std::string_view hot_gas_bypass_installed_units;
			const static std::string_view manufacturer_description;
			const static std::string_view model_number_description;
			const static std::string_view nominal_voltage_description;
			const static std::string_view nominal_frequency_description;
			const static std::string_view compressor_type_description;
			const static std::string_view liquid_data_source_description;
			const static std::string_view refrigerant_description;
			const static std::string_view hot_gas_bypass_installed_description;
			const static std::string_view manufacturer_name;
			const static std::string_view model_number_name;
			const static std::string_view nominal_voltage_name;
			const static std::string_view nominal_frequency_name;
			const static std::string_view compressor_type_name;
			const static std::string_view liquid_data_source_name;
			const static std::string_view refrigerant_name;
			const static std::string_view hot_gas_bypass_installed_name;
		};
		class RatingAHRI550590PartLoadPoint  {
		public:
			double percent_full_load_capacity;
			double cooling_capacity;
			double input_power;
			double evaporator_liquid_volumetric_flow_rate;
			double evaporator_liquid_entering_temperature;
			double evaporator_liquid_leaving_temperature;
			double evaporator_liquid_differential_pressure;
			double evaporator_fouling_factor;
			double condenser_liquid_volumetric_flow_rate;
			double condenser_liquid_entering_temperature;
			double condenser_liquid_leaving_temperature;
			double condenser_liquid_differential_pressure;
			double condenser_fouling_factor;
			bool percent_full_load_capacity_is_set;
			bool cooling_capacity_is_set;
			bool input_power_is_set;
			bool evaporator_liquid_volumetric_flow_rate_is_set;
			bool evaporator_liquid_entering_temperature_is_set;
			bool evaporator_liquid_leaving_temperature_is_set;
			bool evaporator_liquid_differential_pressure_is_set;
			bool evaporator_fouling_factor_is_set;
			bool condenser_liquid_volumetric_flow_rate_is_set;
			bool condenser_liquid_entering_temperature_is_set;
			bool condenser_liquid_leaving_temperature_is_set;
			bool condenser_liquid_differential_pressure_is_set;
			bool condenser_fouling_factor_is_set;
			const static std::string_view percent_full_load_capacity_units;
			const static std::string_view cooling_capacity_units;
			const static std::string_view input_power_units;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_units;
			const static std::string_view evaporator_liquid_entering_temperature_units;
			const static std::string_view evaporator_liquid_leaving_temperature_units;
			const static std::string_view evaporator_liquid_differential_pressure_units;
			const static std::string_view evaporator_fouling_factor_units;
			const static std::string_view condenser_liquid_volumetric_flow_rate_units;
			const static std::string_view condenser_liquid_entering_temperature_units;
			const static std::string_view condenser_liquid_leaving_temperature_units;
			const static std::string_view condenser_liquid_differential_pressure_units;
			const static std::string_view condenser_fouling_factor_units;
			const static std::string_view percent_full_load_capacity_description;
			const static std::string_view cooling_capacity_description;
			const static std::string_view input_power_description;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_description;
			const static std::string_view evaporator_liquid_entering_temperature_description;
			const static std::string_view evaporator_liquid_leaving_temperature_description;
			const static std::string_view evaporator_liquid_differential_pressure_description;
			const static std::string_view evaporator_fouling_factor_description;
			const static std::string_view condenser_liquid_volumetric_flow_rate_description;
			const static std::string_view condenser_liquid_entering_temperature_description;
			const static std::string_view condenser_liquid_leaving_temperature_description;
			const static std::string_view condenser_liquid_differential_pressure_description;
			const static std::string_view condenser_fouling_factor_description;
			const static std::string_view percent_full_load_capacity_name;
			const static std::string_view cooling_capacity_name;
			const static std::string_view input_power_name;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_name;
			const static std::string_view evaporator_liquid_entering_temperature_name;
			const static std::string_view evaporator_liquid_leaving_temperature_name;
			const static std::string_view evaporator_liquid_differential_pressure_name;
			const static std::string_view evaporator_fouling_factor_name;
			const static std::string_view condenser_liquid_volumetric_flow_rate_name;
			const static std::string_view condenser_liquid_entering_temperature_name;
			const static std::string_view condenser_liquid_leaving_temperature_name;
			const static std::string_view condenser_liquid_differential_pressure_name;
			const static std::string_view condenser_fouling_factor_name;
		};
		class RatingAHRI550590  {
		public:
			std::string certified_reference_number;
			RS0001_NS::AHRI550590TestStandardYear test_standard_year;
			std::string rating_source;
			double net_refrigerating_capacity;
			double input_power;
			double cop;
			double part_load_value;
			std::vector<RS0001_NS::RatingAHRI550590PartLoadPoint> part_load_rating_points;
			double full_load_evaporator_liquid_volumetric_flow_rate;
			double full_load_evaporator_liquid_entering_temperature;
			double full_load_evaporator_liquid_leaving_temperature;
			double full_load_evaporator_liquid_differential_pressure;
			double full_load_evaporator_fouling_factor;
			double full_load_condenser_liquid_volumetric_flow_rate;
			double full_load_condenser_liquid_entering_temperature;
			double full_load_condenser_liquid_leaving_temperature;
			double full_load_condenser_liquid_differential_pressure;
			double full_load_condenser_fouling_factor;
			bool rating_reproducible_from_performance_data;
			bool certified_reference_number_is_set;
			bool test_standard_year_is_set;
			bool rating_source_is_set;
			bool net_refrigerating_capacity_is_set;
			bool input_power_is_set;
			bool cop_is_set;
			bool part_load_value_is_set;
			bool part_load_rating_points_is_set;
			bool full_load_evaporator_liquid_volumetric_flow_rate_is_set;
			bool full_load_evaporator_liquid_entering_temperature_is_set;
			bool full_load_evaporator_liquid_leaving_temperature_is_set;
			bool full_load_evaporator_liquid_differential_pressure_is_set;
			bool full_load_evaporator_fouling_factor_is_set;
			bool full_load_condenser_liquid_volumetric_flow_rate_is_set;
			bool full_load_condenser_liquid_entering_temperature_is_set;
			bool full_load_condenser_liquid_leaving_temperature_is_set;
			bool full_load_condenser_liquid_differential_pressure_is_set;
			bool full_load_condenser_fouling_factor_is_set;
			bool rating_reproducible_from_performance_data_is_set;
			const static std::string_view certified_reference_number_units;
			const static std::string_view test_standard_year_units;
			const static std::string_view rating_source_units;
			const static std::string_view net_refrigerating_capacity_units;
			const static std::string_view input_power_units;
			const static std::string_view cop_units;
			const static std::string_view part_load_value_units;
			const static std::string_view part_load_rating_points_units;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_units;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_units;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_units;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_units;
			const static std::string_view full_load_evaporator_fouling_factor_units;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_units;
			const static std::string_view full_load_condenser_liquid_entering_temperature_units;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_units;
			const static std::string_view full_load_condenser_liquid_differential_pressure_units;
			const static std::string_view full_load_condenser_fouling_factor_units;
			const static std::string_view rating_reproducible_from_performance_data_units;
			const static std::string_view certified_reference_number_description;
			const static std::string_view test_standard_year_description;
			const static std::string_view rating_source_description;
			const static std::string_view net_refrigerating_capacity_description;
			const static std::string_view input_power_description;
			const static std::string_view cop_description;
			const static std::string_view part_load_value_description;
			const static std::string_view part_load_rating_points_description;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_description;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_description;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_description;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_description;
			const static std::string_view full_load_evaporator_fouling_factor_description;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_description;
			const static std::string_view full_load_condenser_liquid_entering_temperature_description;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_description;
			const static std::string_view full_load_condenser_liquid_differential_pressure_description;
			const static std::string_view full_load_condenser_fouling_factor_description;
			const static std::string_view rating_reproducible_from_performance_data_description;
			const static std::string_view certified_reference_number_name;
			const static std::string_view test_standard_year_name;
			const static std::string_view rating_source_name;
			const static std::string_view net_refrigerating_capacity_name;
			const static std::string_view input_power_name;
			const static std::string_view cop_name;
			const static std::string_view part_load_value_name;
			const static std::string_view part_load_rating_points_name;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_name;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_name;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_name;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_name;
			const static std::string_view full_load_evaporator_fouling_factor_name;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_name;
			const static std::string_view full_load_condenser_liquid_entering_temperature_name;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_name;
			const static std::string_view full_load_condenser_liquid_differential_pressure_name;
			const static std::string_view full_load_condenser_fouling_factor_name;
			const static std::string_view rating_reproducible_from_performance_data_name;
		};
		class RatingAHRI551591PartLoadPoint  {
		public:
			double percent_full_load_capacity;
			double cooling_capacity;
			double input_power;
			double evaporator_liquid_volumetric_flow_rate;
			double evaporator_liquid_entering_temperature;
			double evaporator_liquid_leaving_temperature;
			double evaporator_liquid_differential_pressure;
			double evaporator_fouling_factor;
			double condenser_liquid_volumetric_flow_rate;
			double condenser_liquid_entering_temperature;
			double condenser_liquid_leaving_temperature;
			double condenser_liquid_differential_pressure;
			double condenser_fouling_factor;
			bool percent_full_load_capacity_is_set;
			bool cooling_capacity_is_set;
			bool input_power_is_set;
			bool evaporator_liquid_volumetric_flow_rate_is_set;
			bool evaporator_liquid_entering_temperature_is_set;
			bool evaporator_liquid_leaving_temperature_is_set;
			bool evaporator_liquid_differential_pressure_is_set;
			bool evaporator_fouling_factor_is_set;
			bool condenser_liquid_volumetric_flow_rate_is_set;
			bool condenser_liquid_entering_temperature_is_set;
			bool condenser_liquid_leaving_temperature_is_set;
			bool condenser_liquid_differential_pressure_is_set;
			bool condenser_fouling_factor_is_set;
			const static std::string_view percent_full_load_capacity_units;
			const static std::string_view cooling_capacity_units;
			const static std::string_view input_power_units;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_units;
			const static std::string_view evaporator_liquid_entering_temperature_units;
			const static std::string_view evaporator_liquid_leaving_temperature_units;
			const static std::string_view evaporator_liquid_differential_pressure_units;
			const static std::string_view evaporator_fouling_factor_units;
			const static std::string_view condenser_liquid_volumetric_flow_rate_units;
			const static std::string_view condenser_liquid_entering_temperature_units;
			const static std::string_view condenser_liquid_leaving_temperature_units;
			const static std::string_view condenser_liquid_differential_pressure_units;
			const static std::string_view condenser_fouling_factor_units;
			const static std::string_view percent_full_load_capacity_description;
			const static std::string_view cooling_capacity_description;
			const static std::string_view input_power_description;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_description;
			const static std::string_view evaporator_liquid_entering_temperature_description;
			const static std::string_view evaporator_liquid_leaving_temperature_description;
			const static std::string_view evaporator_liquid_differential_pressure_description;
			const static std::string_view evaporator_fouling_factor_description;
			const static std::string_view condenser_liquid_volumetric_flow_rate_description;
			const static std::string_view condenser_liquid_entering_temperature_description;
			const static std::string_view condenser_liquid_leaving_temperature_description;
			const static std::string_view condenser_liquid_differential_pressure_description;
			const static std::string_view condenser_fouling_factor_description;
			const static std::string_view percent_full_load_capacity_name;
			const static std::string_view cooling_capacity_name;
			const static std::string_view input_power_name;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_name;
			const static std::string_view evaporator_liquid_entering_temperature_name;
			const static std::string_view evaporator_liquid_leaving_temperature_name;
			const static std::string_view evaporator_liquid_differential_pressure_name;
			const static std::string_view evaporator_fouling_factor_name;
			const static std::string_view condenser_liquid_volumetric_flow_rate_name;
			const static std::string_view condenser_liquid_entering_temperature_name;
			const static std::string_view condenser_liquid_leaving_temperature_name;
			const static std::string_view condenser_liquid_differential_pressure_name;
			const static std::string_view condenser_fouling_factor_name;
		};
		class RatingAHRI551591  {
		public:
			std::string certified_reference_number;
			RS0001_NS::AHRI551591TestStandardYear test_standard_year;
			std::string rating_source;
			double net_refrigerating_capacity;
			double input_power;
			double cop;
			double part_load_value;
			std::vector<RS0001_NS::RatingAHRI551591PartLoadPoint> part_load_rating_points;
			double full_load_evaporator_liquid_volumetric_flow_rate;
			double full_load_evaporator_liquid_entering_temperature;
			double full_load_evaporator_liquid_leaving_temperature;
			double full_load_evaporator_liquid_differential_pressure;
			double full_load_evaporator_fouling_factor;
			double full_load_condenser_liquid_volumetric_flow_rate;
			double full_load_condenser_liquid_entering_temperature;
			double full_load_condenser_liquid_leaving_temperature;
			double full_load_condenser_liquid_differential_pressure;
			double full_load_condenser_fouling_factor;
			bool rating_reproducible_from_performance_data;
			bool certified_reference_number_is_set;
			bool test_standard_year_is_set;
			bool rating_source_is_set;
			bool net_refrigerating_capacity_is_set;
			bool input_power_is_set;
			bool cop_is_set;
			bool part_load_value_is_set;
			bool part_load_rating_points_is_set;
			bool full_load_evaporator_liquid_volumetric_flow_rate_is_set;
			bool full_load_evaporator_liquid_entering_temperature_is_set;
			bool full_load_evaporator_liquid_leaving_temperature_is_set;
			bool full_load_evaporator_liquid_differential_pressure_is_set;
			bool full_load_evaporator_fouling_factor_is_set;
			bool full_load_condenser_liquid_volumetric_flow_rate_is_set;
			bool full_load_condenser_liquid_entering_temperature_is_set;
			bool full_load_condenser_liquid_leaving_temperature_is_set;
			bool full_load_condenser_liquid_differential_pressure_is_set;
			bool full_load_condenser_fouling_factor_is_set;
			bool rating_reproducible_from_performance_data_is_set;
			const static std::string_view certified_reference_number_units;
			const static std::string_view test_standard_year_units;
			const static std::string_view rating_source_units;
			const static std::string_view net_refrigerating_capacity_units;
			const static std::string_view input_power_units;
			const static std::string_view cop_units;
			const static std::string_view part_load_value_units;
			const static std::string_view part_load_rating_points_units;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_units;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_units;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_units;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_units;
			const static std::string_view full_load_evaporator_fouling_factor_units;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_units;
			const static std::string_view full_load_condenser_liquid_entering_temperature_units;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_units;
			const static std::string_view full_load_condenser_liquid_differential_pressure_units;
			const static std::string_view full_load_condenser_fouling_factor_units;
			const static std::string_view rating_reproducible_from_performance_data_units;
			const static std::string_view certified_reference_number_description;
			const static std::string_view test_standard_year_description;
			const static std::string_view rating_source_description;
			const static std::string_view net_refrigerating_capacity_description;
			const static std::string_view input_power_description;
			const static std::string_view cop_description;
			const static std::string_view part_load_value_description;
			const static std::string_view part_load_rating_points_description;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_description;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_description;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_description;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_description;
			const static std::string_view full_load_evaporator_fouling_factor_description;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_description;
			const static std::string_view full_load_condenser_liquid_entering_temperature_description;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_description;
			const static std::string_view full_load_condenser_liquid_differential_pressure_description;
			const static std::string_view full_load_condenser_fouling_factor_description;
			const static std::string_view rating_reproducible_from_performance_data_description;
			const static std::string_view certified_reference_number_name;
			const static std::string_view test_standard_year_name;
			const static std::string_view rating_source_name;
			const static std::string_view net_refrigerating_capacity_name;
			const static std::string_view input_power_name;
			const static std::string_view cop_name;
			const static std::string_view part_load_value_name;
			const static std::string_view part_load_rating_points_name;
			const static std::string_view full_load_evaporator_liquid_volumetric_flow_rate_name;
			const static std::string_view full_load_evaporator_liquid_entering_temperature_name;
			const static std::string_view full_load_evaporator_liquid_leaving_temperature_name;
			const static std::string_view full_load_evaporator_liquid_differential_pressure_name;
			const static std::string_view full_load_evaporator_fouling_factor_name;
			const static std::string_view full_load_condenser_liquid_volumetric_flow_rate_name;
			const static std::string_view full_load_condenser_liquid_entering_temperature_name;
			const static std::string_view full_load_condenser_liquid_leaving_temperature_name;
			const static std::string_view full_load_condenser_liquid_differential_pressure_name;
			const static std::string_view full_load_condenser_fouling_factor_name;
			const static std::string_view rating_reproducible_from_performance_data_name;
		};
		class Description  {
		public:
			RS0001_NS::ProductInformation product_information;
			RS0001_NS::RatingAHRI550590 rating_ahri_550_590;
			RS0001_NS::RatingAHRI551591 rating_ahri_551_591;
			bool product_information_is_set;
			bool rating_ahri_550_590_is_set;
			bool rating_ahri_551_591_is_set;
			const static std::string_view product_information_units;
			const static std::string_view rating_ahri_550_590_units;
			const static std::string_view rating_ahri_551_591_units;
			const static std::string_view product_information_description;
			const static std::string_view rating_ahri_550_590_description;
			const static std::string_view rating_ahri_551_591_description;
			const static std::string_view product_information_name;
			const static std::string_view rating_ahri_550_590_name;
			const static std::string_view rating_ahri_551_591_name;
		};
		class GridVariablesCooling  : public grid_variables_base {
		public:
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				evaporator_liquid_volumetric_flow_rate_index,
				evaporator_liquid_leaving_temperature_index,
				condenser_liquid_volumetric_flow_rate_index,
				condenser_liquid_entering_temperature_index,
				compressor_sequence_number_index,
				index_count
			};
			std::vector<double> evaporator_liquid_volumetric_flow_rate;
			std::vector<double> evaporator_liquid_leaving_temperature;
			std::vector<double> condenser_liquid_volumetric_flow_rate;
			std::vector<double> condenser_liquid_entering_temperature;
			std::vector<int> compressor_sequence_number;
			bool evaporator_liquid_volumetric_flow_rate_is_set;
			bool evaporator_liquid_leaving_temperature_is_set;
			bool condenser_liquid_volumetric_flow_rate_is_set;
			bool condenser_liquid_entering_temperature_is_set;
			bool compressor_sequence_number_is_set;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_units;
			const static std::string_view evaporator_liquid_leaving_temperature_units;
			const static std::string_view condenser_liquid_volumetric_flow_rate_units;
			const static std::string_view condenser_liquid_entering_temperature_units;
			const static std::string_view compressor_sequence_number_units;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_description;
			const static std::string_view evaporator_liquid_leaving_temperature_description;
			const static std::string_view condenser_liquid_volumetric_flow_rate_description;
			const static std::string_view condenser_liquid_entering_temperature_description;
			const static std::string_view compressor_sequence_number_description;
			const static std::string_view evaporator_liquid_volumetric_flow_rate_name;
			const static std::string_view evaporator_liquid_leaving_temperature_name;
			const static std::string_view condenser_liquid_volumetric_flow_rate_name;
			const static std::string_view condenser_liquid_entering_temperature_name;
			const static std::string_view compressor_sequence_number_name;
		};
		struct LookupVariablesCooling  : public lookup_variables_base {
		
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				input_power_index,
				net_evaporator_capacity_index,
				net_condenser_capacity_index,
				evaporator_liquid_entering_temperature_index,
				condenser_liquid_leaving_temperature_index,
				evaporator_liquid_differential_pressure_index,
				condenser_liquid_differential_pressure_index,
				oil_cooler_heat_index,
				auxiliary_heat_index,
				index_count
			};
			std::vector<double> input_power;
			std::vector<double> net_evaporator_capacity;
			std::vector<double> net_condenser_capacity;
			std::vector<double> evaporator_liquid_entering_temperature;
			std::vector<double> condenser_liquid_leaving_temperature;
			std::vector<double> evaporator_liquid_differential_pressure;
			std::vector<double> condenser_liquid_differential_pressure;
			std::vector<double> oil_cooler_heat;
			std::vector<double> auxiliary_heat;
			bool input_power_is_set;
			bool net_evaporator_capacity_is_set;
			bool net_condenser_capacity_is_set;
			bool evaporator_liquid_entering_temperature_is_set;
			bool condenser_liquid_leaving_temperature_is_set;
			bool evaporator_liquid_differential_pressure_is_set;
			bool condenser_liquid_differential_pressure_is_set;
			bool oil_cooler_heat_is_set;
			bool auxiliary_heat_is_set;
			const static std::string_view input_power_units;
			const static std::string_view net_evaporator_capacity_units;
			const static std::string_view net_condenser_capacity_units;
			const static std::string_view evaporator_liquid_entering_temperature_units;
			const static std::string_view condenser_liquid_leaving_temperature_units;
			const static std::string_view evaporator_liquid_differential_pressure_units;
			const static std::string_view condenser_liquid_differential_pressure_units;
			const static std::string_view oil_cooler_heat_units;
			const static std::string_view auxiliary_heat_units;
			const static std::string_view input_power_description;
			const static std::string_view net_evaporator_capacity_description;
			const static std::string_view net_condenser_capacity_description;
			const static std::string_view evaporator_liquid_entering_temperature_description;
			const static std::string_view condenser_liquid_leaving_temperature_description;
			const static std::string_view evaporator_liquid_differential_pressure_description;
			const static std::string_view condenser_liquid_differential_pressure_description;
			const static std::string_view oil_cooler_heat_description;
			const static std::string_view auxiliary_heat_description;
			const static std::string_view input_power_name;
			const static std::string_view net_evaporator_capacity_name;
			const static std::string_view net_condenser_capacity_name;
			const static std::string_view evaporator_liquid_entering_temperature_name;
			const static std::string_view condenser_liquid_leaving_temperature_name;
			const static std::string_view evaporator_liquid_differential_pressure_name;
			const static std::string_view condenser_liquid_differential_pressure_name;
			const static std::string_view oil_cooler_heat_name;
			const static std::string_view auxiliary_heat_name;
		};
		struct LookupVariablesCoolingStruct {
			double input_power;
			double net_evaporator_capacity;
			double net_condenser_capacity;
			double evaporator_liquid_entering_temperature;
			double condenser_liquid_leaving_temperature;
			double evaporator_liquid_differential_pressure;
			double condenser_liquid_differential_pressure;
			double oil_cooler_heat;
			double auxiliary_heat;
		};
		class PerformanceMapCooling  : public performance_map_base {
		public:
			void Initialize (const nlohmann::json& j) override;
			RS0001_NS::GridVariablesCooling grid_variables;
			RS0001_NS::LookupVariablesCooling lookup_variables;
			bool grid_variables_is_set;
			bool lookup_variables_is_set;
			const static std::string_view grid_variables_units;
			const static std::string_view lookup_variables_units;
			const static std::string_view grid_variables_description;
			const static std::string_view lookup_variables_description;
			const static std::string_view grid_variables_name;
			const static std::string_view lookup_variables_name;
			using performance_map_base::Calculate_performance;
			LookupVariablesCoolingStruct Calculate_performance (double evaporator_liquid_volumetric_flow_rate, double evaporator_liquid_leaving_temperature, double condenser_liquid_volumetric_flow_rate, double condenser_liquid_entering_temperature, double compressor_sequence_number);
		};
		class GridVariablesStandby  : public grid_variables_base {
		public:
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				environment_dry_bulb_temperature_index,
				index_count
			};
			std::vector<double> environment_dry_bulb_temperature;
			bool environment_dry_bulb_temperature_is_set;
			const static std::string_view environment_dry_bulb_temperature_units;
			const static std::string_view environment_dry_bulb_temperature_description;
			const static std::string_view environment_dry_bulb_temperature_name;
		};
		struct LookupVariablesStandby  : public lookup_variables_base {
		
			void Populate_performance_map (performance_map_base* performance_map) override;
			enum  {
				input_power_index,
				index_count
			};
			std::vector<double> input_power;
			bool input_power_is_set;
			const static std::string_view input_power_units;
			const static std::string_view input_power_description;
			const static std::string_view input_power_name;
		};
		struct LookupVariablesStandbyStruct {
			double input_power;
		};
		class PerformanceMapStandby  : public performance_map_base {
		public:
			void Initialize (const nlohmann::json& j) override;
			RS0001_NS::GridVariablesStandby grid_variables;
			RS0001_NS::LookupVariablesStandby lookup_variables;
			bool grid_variables_is_set;
			bool lookup_variables_is_set;
			const static std::string_view grid_variables_units;
			const static std::string_view lookup_variables_units;
			const static std::string_view grid_variables_description;
			const static std::string_view lookup_variables_description;
			const static std::string_view grid_variables_name;
			const static std::string_view lookup_variables_name;
			using performance_map_base::Calculate_performance;
			LookupVariablesStandbyStruct Calculate_performance (double environment_dry_bulb_temperature);
		};
		class Performance  {
		public:
			ASHRAE205_NS::LiquidMixture evaporator_liquid_type;
			ASHRAE205_NS::LiquidMixture condenser_liquid_type;
			double evaporator_fouling_factor;
			double condenser_fouling_factor;
			ASHRAE205_NS::CompressorSpeedControlType compressor_speed_control_type;
			double maximum_power;
			double cycling_degradation_coefficient;
			RS0001_NS::PerformanceMapCooling performance_map_cooling;
			RS0001_NS::PerformanceMapStandby performance_map_standby;
			bool evaporator_liquid_type_is_set;
			bool condenser_liquid_type_is_set;
			bool evaporator_fouling_factor_is_set;
			bool condenser_fouling_factor_is_set;
			bool compressor_speed_control_type_is_set;
			bool maximum_power_is_set;
			bool cycling_degradation_coefficient_is_set;
			bool performance_map_cooling_is_set;
			bool performance_map_standby_is_set;
			const static std::string_view evaporator_liquid_type_units;
			const static std::string_view condenser_liquid_type_units;
			const static std::string_view evaporator_fouling_factor_units;
			const static std::string_view condenser_fouling_factor_units;
			const static std::string_view compressor_speed_control_type_units;
			const static std::string_view maximum_power_units;
			const static std::string_view cycling_degradation_coefficient_units;
			const static std::string_view performance_map_cooling_units;
			const static std::string_view performance_map_standby_units;
			const static std::string_view evaporator_liquid_type_description;
			const static std::string_view condenser_liquid_type_description;
			const static std::string_view evaporator_fouling_factor_description;
			const static std::string_view condenser_fouling_factor_description;
			const static std::string_view compressor_speed_control_type_description;
			const static std::string_view maximum_power_description;
			const static std::string_view cycling_degradation_coefficient_description;
			const static std::string_view performance_map_cooling_description;
			const static std::string_view performance_map_standby_description;
			const static std::string_view evaporator_liquid_type_name;
			const static std::string_view condenser_liquid_type_name;
			const static std::string_view evaporator_fouling_factor_name;
			const static std::string_view condenser_fouling_factor_name;
			const static std::string_view compressor_speed_control_type_name;
			const static std::string_view maximum_power_name;
			const static std::string_view cycling_degradation_coefficient_name;
			const static std::string_view performance_map_cooling_name;
			const static std::string_view performance_map_standby_name;
		};
		class RS0001  : public rs_instance_base {
		public:
			void Initialize (const nlohmann::json& j) override;
			ASHRAE205_NS::Metadata metadata;
			RS0001_NS::Description description;
			RS0001_NS::Performance performance;
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
		NLOHMANN_JSON_SERIALIZE_ENUM (AHRI550590TestStandardYear, {
			{AHRI550590TestStandardYear::UNKNOWN, "UNKNOWN"},
			{AHRI550590TestStandardYear::IP_2015, "IP_2015"},
			{AHRI550590TestStandardYear::IP_2015_ADDENDUM_1, "IP_2015_ADDENDUM_1"},
			{AHRI550590TestStandardYear::IP_2018, "IP_2018"},
			{AHRI550590TestStandardYear::IP_2020, "IP_2020"},
		})
		NLOHMANN_JSON_SERIALIZE_ENUM (AHRI551591TestStandardYear, {
			{AHRI551591TestStandardYear::UNKNOWN, "UNKNOWN"},
			{AHRI551591TestStandardYear::SI_2015, "SI_2015"},
			{AHRI551591TestStandardYear::SI_2015_ADDENDUM_1, "SI_2015_ADDENDUM_1"},
			{AHRI551591TestStandardYear::SI_2018, "SI_2018"},
		})
		void from_json (const nlohmann::json& j, RS0001& x);
		void from_json (const nlohmann::json& j, Description& x);
		void from_json (const nlohmann::json& j, ProductInformation& x);
		void from_json (const nlohmann::json& j, RatingAHRI550590& x);
		void from_json (const nlohmann::json& j, RatingAHRI550590PartLoadPoint& x);
		void from_json (const nlohmann::json& j, RatingAHRI551591& x);
		void from_json (const nlohmann::json& j, RatingAHRI551591PartLoadPoint& x);
		void from_json (const nlohmann::json& j, Performance& x);
		void from_json (const nlohmann::json& j, PerformanceMapCooling& x);
		void from_json (const nlohmann::json& j, GridVariablesCooling& x);
		void from_json (const nlohmann::json& j, LookupVariablesCooling& x);
		void from_json (const nlohmann::json& j, PerformanceMapStandby& x);
		void from_json (const nlohmann::json& j, GridVariablesStandby& x);
		void from_json (const nlohmann::json& j, LookupVariablesStandby& x);
	}
}
#endif

