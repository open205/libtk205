#include <RS0007.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace RS0007_NS  {
	
		void from_json(const nlohmann::json& j, ProductInformation& x) {
			A205_json_get<std::string>(j, "manufacturer", x.manufacturer, x.manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "model_number", x.model_number, x.model_number_is_set, false);
			A205_json_get<RS0007_NS::DriveType>(j, "drive_type", x.drive_type, x.drive_type_is_set, false);
		}
		const std::string_view ProductInformation::manufacturer_units = "";

		const std::string_view ProductInformation::model_number_units = "";

		const std::string_view ProductInformation::drive_type_units = "";

		const std::string_view ProductInformation::manufacturer_description = "Manufacturer name";

		const std::string_view ProductInformation::model_number_description = "Model number";

		const std::string_view ProductInformation::drive_type_description = "Type of mechanical drive";

		const std::string_view ProductInformation::manufacturer_name = "manufacturer";

		const std::string_view ProductInformation::model_number_name = "model_number";

		const std::string_view ProductInformation::drive_type_name = "drive_type";

		void from_json(const nlohmann::json& j, Description& x) {
			A205_json_get<RS0007_NS::ProductInformation>(j, "product_information", x.product_information, x.product_information_is_set, false);
		}
		const std::string_view Description::product_information_units = "";

		const std::string_view Description::product_information_description = "Data group describing product information";

		const std::string_view Description::product_information_name = "product_information";

		void from_json(const nlohmann::json& j, GridVariables& x) {
			A205_json_get<std::vector<double>>(j, "output_power", x.output_power, x.output_power_is_set, true);
		}
		void GridVariables::Populate_performance_map(performance_map_base* performance_map) {
			Add_grid_axis(performance_map, output_power);
			performance_map->Finalize_grid();
		}
		const std::string_view GridVariables::output_power_units = "W";

		const std::string_view GridVariables::output_power_description = "Output shaft power";

		const std::string_view GridVariables::output_power_name = "output_power";

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
			A205_json_get<RS0007_NS::GridVariables>(j, "grid_variables", x.grid_variables, x.grid_variables_is_set, true);
			x.grid_variables.Populate_performance_map(&x);
			A205_json_get<RS0007_NS::LookupVariables>(j, "lookup_variables", x.lookup_variables, x.lookup_variables_is_set, true);
			x.lookup_variables.Populate_performance_map(&x);
		}
		void PerformanceMap::Initialize(const nlohmann::json& j) {
			A205_json_get<RS0007_NS::GridVariables>(j, "grid_variables", grid_variables, grid_variables_is_set, true);
			grid_variables.Populate_performance_map(this);
			A205_json_get<RS0007_NS::LookupVariables>(j, "lookup_variables", lookup_variables, lookup_variables_is_set, true);
			lookup_variables.Populate_performance_map(this);
		}
		const std::string_view PerformanceMap::grid_variables_units = "";

		const std::string_view PerformanceMap::lookup_variables_units = "";

		const std::string_view PerformanceMap::grid_variables_description = "Data group describing grid variables for drive performance";

		const std::string_view PerformanceMap::lookup_variables_description = "Data group describing lookup variables for drive performance";

		const std::string_view PerformanceMap::grid_variables_name = "grid_variables";

		const std::string_view PerformanceMap::lookup_variables_name = "lookup_variables";

		LookupVariablesStruct PerformanceMap::Calculate_performance(double output_power) {
			std::vector<double> target {output_power};
			auto v = performance_map_base::Calculate_performance(target);
			LookupVariablesStruct s {v[0], };
			return s;
		}
		void from_json(const nlohmann::json& j, Performance& x) {
			A205_json_get<double>(j, "speed_ratio", x.speed_ratio, x.speed_ratio_is_set, true);
			A205_json_get<RS0007_NS::PerformanceMap>(j, "performance_map", x.performance_map, x.performance_map_is_set, true);
		}
		const std::string_view Performance::speed_ratio_units = "-";

		const std::string_view Performance::performance_map_units = "";

		const std::string_view Performance::speed_ratio_description = "Ratio of input shaft speed to output shaft speed";

		const std::string_view Performance::performance_map_description = "Data group describing drive performance when operating";

		const std::string_view Performance::speed_ratio_name = "speed_ratio";

		const std::string_view Performance::performance_map_name = "performance_map";

		void RS0007::Initialize(const nlohmann::json& j) {
			A205_json_get<ASHRAE205_NS::Metadata>(j, "metadata", metadata, metadata_is_set, true);
			A205_json_get<RS0007_NS::Description>(j, "description", description, description_is_set, false);
			A205_json_get<RS0007_NS::Performance>(j, "performance", performance, performance_is_set, true);
		}
		const std::string_view RS0007::metadata_units = "";

		const std::string_view RS0007::description_units = "";

		const std::string_view RS0007::performance_units = "";

		const std::string_view RS0007::metadata_description = "Metadata data group";

		const std::string_view RS0007::description_description = "Data group describing product and rating information";

		const std::string_view RS0007::performance_description = "Data group containing performance information";

		const std::string_view RS0007::metadata_name = "metadata";

		const std::string_view RS0007::description_name = "description";

		const std::string_view RS0007::performance_name = "performance";

		void from_json(const nlohmann::json& j, RS0007& x) {
			x.Initialize(j);
		}
	}
}

