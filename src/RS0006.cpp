#include <RS0006.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace RS0006_NS  {
	
		void from_json(const nlohmann::json& j, ProductInformation& x) {
			A205_json_get<std::string>(j, "manufacturer", x.manufacturer, x.manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "model_number", x.model_number, x.model_number_is_set, false);
		}
		const std::string_view ProductInformation::manufacturer_units = "";

		const std::string_view ProductInformation::model_number_units = "";

		const std::string_view ProductInformation::manufacturer_description = "Manufacturer name";

		const std::string_view ProductInformation::model_number_description = "Model number";

		const std::string_view ProductInformation::manufacturer_name = "manufacturer";

		const std::string_view ProductInformation::model_number_name = "model_number";

		void from_json(const nlohmann::json& j, Description& x) {
			A205_json_get<RS0006_NS::ProductInformation>(j, "product_information", x.product_information, x.product_information_is_set, false);
		}
		const std::string_view Description::product_information_units = "";

		const std::string_view Description::product_information_description = "Data group describing product information";

		const std::string_view Description::product_information_name = "product_information";

		void from_json(const nlohmann::json& j, GridVariables& x) {
			A205_json_get<std::vector<double>>(j, "output_power", x.output_power, x.output_power_is_set, true);
			A205_json_get<std::vector<double>>(j, "output_frequency", x.output_frequency, x.output_frequency_is_set, true);
		}
		void GridVariables::Populate_performance_map(performance_map_base* performance_map) {
			Add_grid_axis(performance_map, output_power);
			Add_grid_axis(performance_map, output_frequency);
			performance_map->Finalize_grid();
		}
		const std::string_view GridVariables::output_power_units = "W";

		const std::string_view GridVariables::output_frequency_units = "Hz";

		const std::string_view GridVariables::output_power_description = "Power delivered to the motor";

		const std::string_view GridVariables::output_frequency_description = "Frequency delivered to the motor";

		const std::string_view GridVariables::output_power_name = "output_power";

		const std::string_view GridVariables::output_frequency_name = "output_frequency";

		void from_json(const nlohmann::json& j, LookupVariables& x) {
			A205_json_get<std::vector<double>>(j, "efficiency", x.efficiency, x.efficiency_is_set, true);
		}
		void LookupVariables::Populate_performance_map(performance_map_base* performance_map) {
			Add_data_table(performance_map, efficiency);
		}
		const std::string_view LookupVariables::efficiency_units = "-";

		const std::string_view LookupVariables::efficiency_description = "Efficiency of drive";

		const std::string_view LookupVariables::efficiency_name = "efficiency";

		void from_json(const nlohmann::json& j, PerformanceMap& x) {
			A205_json_get<RS0006_NS::GridVariables>(j, "grid_variables", x.grid_variables, x.grid_variables_is_set, true);
			x.grid_variables.Populate_performance_map(&x);
			A205_json_get<RS0006_NS::LookupVariables>(j, "lookup_variables", x.lookup_variables, x.lookup_variables_is_set, true);
			x.lookup_variables.Populate_performance_map(&x);
		}
		void PerformanceMap::Initialize(const nlohmann::json& j) {
			A205_json_get<RS0006_NS::GridVariables>(j, "grid_variables", grid_variables, grid_variables_is_set, true);
			grid_variables.Populate_performance_map(this);
			A205_json_get<RS0006_NS::LookupVariables>(j, "lookup_variables", lookup_variables, lookup_variables_is_set, true);
			lookup_variables.Populate_performance_map(this);
		}
		const std::string_view PerformanceMap::grid_variables_units = "";

		const std::string_view PerformanceMap::lookup_variables_units = "";

		const std::string_view PerformanceMap::grid_variables_description = "Data group describing grid variables for drive performance";

		const std::string_view PerformanceMap::lookup_variables_description = "Data group describing lookup variables for drive performance";

		const std::string_view PerformanceMap::grid_variables_name = "grid_variables";

		const std::string_view PerformanceMap::lookup_variables_name = "lookup_variables";

		LookupVariablesStruct PerformanceMap::Calculate_performance(double output_power, double output_frequency) {
			std::vector<double> target {output_power, output_frequency};
			auto v = performance_map_base::Calculate_performance(target);
			LookupVariablesStruct s {v[0], };
			return s;
		}
		void from_json(const nlohmann::json& j, Performance& x) {
			A205_json_get<double>(j, "maximum_power", x.maximum_power, x.maximum_power_is_set, true);
			A205_json_get<double>(j, "standby_power", x.standby_power, x.standby_power_is_set, true);
			A205_json_get<RS0006_NS::CoolingMethod>(j, "cooling_method", x.cooling_method, x.cooling_method_is_set, true);
			A205_json_get<RS0006_NS::PerformanceMap>(j, "performance_map", x.performance_map, x.performance_map_is_set, true);
		}
		const std::string_view Performance::maximum_power_units = "W";

		const std::string_view Performance::standby_power_units = "W";

		const std::string_view Performance::cooling_method_units = "";

		const std::string_view Performance::performance_map_units = "";

		const std::string_view Performance::maximum_power_description = "Maximum power draw of the drive";

		const std::string_view Performance::standby_power_description = "Power draw when the motor is not operating";

		const std::string_view Performance::cooling_method_description = "Method used to cool the drive";

		const std::string_view Performance::performance_map_description = "Data group describing drive performance when operating";

		const std::string_view Performance::maximum_power_name = "maximum_power";

		const std::string_view Performance::standby_power_name = "standby_power";

		const std::string_view Performance::cooling_method_name = "cooling_method";

		const std::string_view Performance::performance_map_name = "performance_map";

		void RS0006::Initialize(const nlohmann::json& j) {
			A205_json_get<ASHRAE205_NS::Metadata>(j, "metadata", metadata, metadata_is_set, true);
			A205_json_get<RS0006_NS::Description>(j, "description", description, description_is_set, false);
			A205_json_get<RS0006_NS::Performance>(j, "performance", performance, performance_is_set, true);
		}
		const std::string_view RS0006::metadata_units = "";

		const std::string_view RS0006::description_units = "";

		const std::string_view RS0006::performance_units = "";

		const std::string_view RS0006::metadata_description = "Metadata data group";

		const std::string_view RS0006::description_description = "Data group describing product and rating information";

		const std::string_view RS0006::performance_description = "Data group containing performance information";

		const std::string_view RS0006::metadata_name = "metadata";

		const std::string_view RS0006::description_name = "description";

		const std::string_view RS0006::performance_name = "performance";

		void from_json(const nlohmann::json& j, RS0006& x) {
			x.Initialize(j);
		}
	}
}

