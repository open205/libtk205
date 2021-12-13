#include <RS0005.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace RS0005_NS  {
	
		void from_json(const nlohmann::json& j, ProductInformation& x) {
			A205_json_get<std::string>(j, "manufacturer", x.manufacturer, x.manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "model_number", x.model_number, x.model_number_is_set, false);
			A205_json_get<double>(j, "nominal_voltage", x.nominal_voltage, x.nominal_voltage_is_set, false);
			A205_json_get<double>(j, "nominal_frequency", x.nominal_frequency, x.nominal_frequency_is_set, false);
		}
		const std::string_view ProductInformation::manufacturer_units = "";

		const std::string_view ProductInformation::model_number_units = "";

		const std::string_view ProductInformation::nominal_voltage_units = "V";

		const std::string_view ProductInformation::nominal_frequency_units = "Hz";

		const std::string_view ProductInformation::manufacturer_description = "Manufacturer name";

		const std::string_view ProductInformation::model_number_description = "Model number";

		const std::string_view ProductInformation::nominal_voltage_description = "Nominal voltage";

		const std::string_view ProductInformation::nominal_frequency_description = "Nominal frequency";

		const std::string_view ProductInformation::manufacturer_name = "manufacturer";

		const std::string_view ProductInformation::model_number_name = "model_number";

		const std::string_view ProductInformation::nominal_voltage_name = "nominal_voltage";

		const std::string_view ProductInformation::nominal_frequency_name = "nominal_frequency";

		void from_json(const nlohmann::json& j, Description& x) {
			A205_json_get<RS0005_NS::ProductInformation>(j, "product_information", x.product_information, x.product_information_is_set, false);
		}
		const std::string_view Description::product_information_units = "";

		const std::string_view Description::product_information_description = "Data group describing product information";

		const std::string_view Description::product_information_name = "product_information";

		void from_json(const nlohmann::json& j, GridVariables& x) {
			A205_json_get<std::vector<double>>(j, "shaft_power", x.shaft_power, x.shaft_power_is_set, true);
			A205_json_get<std::vector<double>>(j, "shaft_rotational_speed", x.shaft_rotational_speed, x.shaft_rotational_speed_is_set, true);
		}
		void GridVariables::Populate_performance_map(performance_map_base* performance_map) {
			Add_grid_axis(performance_map, shaft_power);
			Add_grid_axis(performance_map, shaft_rotational_speed);
			performance_map->Finalize_grid();
		}
		const std::string_view GridVariables::shaft_power_units = "W";

		const std::string_view GridVariables::shaft_rotational_speed_units = "rev/s";

		const std::string_view GridVariables::shaft_power_description = "Delivered rotational shaft power";

		const std::string_view GridVariables::shaft_rotational_speed_description = "Rotational speed of shaft";

		const std::string_view GridVariables::shaft_power_name = "shaft_power";

		const std::string_view GridVariables::shaft_rotational_speed_name = "shaft_rotational_speed";

		void from_json(const nlohmann::json& j, LookupVariables& x) {
			A205_json_get<std::vector<double>>(j, "efficiency", x.efficiency, x.efficiency_is_set, true);
			A205_json_get<std::vector<double>>(j, "power_factor", x.power_factor, x.power_factor_is_set, true);
		}
		void LookupVariables::Populate_performance_map(performance_map_base* performance_map) {
			Add_data_table(performance_map, efficiency);
			Add_data_table(performance_map, power_factor);
		}
		const std::string_view LookupVariables::efficiency_units = "-";

		const std::string_view LookupVariables::power_factor_units = "-";

		const std::string_view LookupVariables::efficiency_description = "Efficiency of motor";

		const std::string_view LookupVariables::power_factor_description = "Power factor of the motor";

		const std::string_view LookupVariables::efficiency_name = "efficiency";

		const std::string_view LookupVariables::power_factor_name = "power_factor";

		void from_json(const nlohmann::json& j, PerformanceMap& x) {
			A205_json_get<RS0005_NS::GridVariables>(j, "grid_variables", x.grid_variables, x.grid_variables_is_set, true);
			x.grid_variables.Populate_performance_map(&x);
			A205_json_get<RS0005_NS::LookupVariables>(j, "lookup_variables", x.lookup_variables, x.lookup_variables_is_set, true);
			x.lookup_variables.Populate_performance_map(&x);
		}
		void PerformanceMap::Initialize(const nlohmann::json& j) {
			A205_json_get<RS0005_NS::GridVariables>(j, "grid_variables", grid_variables, grid_variables_is_set, true);
			grid_variables.Populate_performance_map(this);
			A205_json_get<RS0005_NS::LookupVariables>(j, "lookup_variables", lookup_variables, lookup_variables_is_set, true);
			lookup_variables.Populate_performance_map(this);
		}
		const std::string_view PerformanceMap::grid_variables_units = "";

		const std::string_view PerformanceMap::lookup_variables_units = "";

		const std::string_view PerformanceMap::grid_variables_description = "Data group describing grid variables for motor performance";

		const std::string_view PerformanceMap::lookup_variables_description = "Data group describing lookup variables for motor performance";

		const std::string_view PerformanceMap::grid_variables_name = "grid_variables";

		const std::string_view PerformanceMap::lookup_variables_name = "lookup_variables";

		LookupVariablesStruct PerformanceMap::Calculate_performance(double shaft_power, double shaft_rotational_speed) {
			std::vector<double> target {shaft_power, shaft_rotational_speed};
			auto v = performance_map_base::Calculate_performance(target);
			LookupVariablesStruct s {v[0], v[1], };
			return s;
		}
		void from_json(const nlohmann::json& j, Performance& x) {
			A205_json_get<double>(j, "maximum_power", x.maximum_power, x.maximum_power_is_set, true);
			A205_json_get<double>(j, "standby_power", x.standby_power, x.standby_power_is_set, true);
			A205_json_get<int>(j, "number_of_poles", x.number_of_poles, x.number_of_poles_is_set, true);
			A205_json_get<RS0006_NS::RS0006>(j, "drive_representation", x.drive_representation, x.drive_representation_is_set, false);
			A205_json_get<RS0005_NS::PerformanceMap>(j, "performance_map", x.performance_map, x.performance_map_is_set, false);
		}
		const std::string_view Performance::maximum_power_units = "W";

		const std::string_view Performance::standby_power_units = "W";

		const std::string_view Performance::number_of_poles_units = "";

		const std::string_view Performance::drive_representation_units = "";

		const std::string_view Performance::performance_map_units = "";

		const std::string_view Performance::maximum_power_description = "Maximum operational input power to the motor";

		const std::string_view Performance::standby_power_description = "Power draw when motor is not operating";

		const std::string_view Performance::number_of_poles_description = "Number of poles";

		const std::string_view Performance::drive_representation_description = "The corresponding Standard 205 drive representation";

		const std::string_view Performance::performance_map_description = "Data group describing motor performance when operating";

		const std::string_view Performance::maximum_power_name = "maximum_power";

		const std::string_view Performance::standby_power_name = "standby_power";

		const std::string_view Performance::number_of_poles_name = "number_of_poles";

		const std::string_view Performance::drive_representation_name = "drive_representation";

		const std::string_view Performance::performance_map_name = "performance_map";

		void RS0005::Initialize(const nlohmann::json& j) {
			A205_json_get<ASHRAE205_NS::Metadata>(j, "metadata", metadata, metadata_is_set, true);
			A205_json_get<RS0005_NS::Description>(j, "description", description, description_is_set, false);
			A205_json_get<RS0005_NS::Performance>(j, "performance", performance, performance_is_set, true);
		}
		const std::string_view RS0005::metadata_units = "";

		const std::string_view RS0005::description_units = "";

		const std::string_view RS0005::performance_units = "";

		const std::string_view RS0005::metadata_description = "Metadata data group";

		const std::string_view RS0005::description_description = "Data group describing product and rating information";

		const std::string_view RS0005::performance_description = "Data group containing performance information";

		const std::string_view RS0005::metadata_name = "metadata";

		const std::string_view RS0005::description_name = "description";

		const std::string_view RS0005::performance_name = "performance";

		void from_json(const nlohmann::json& j, RS0005& x) {
			x.Initialize(j);
		}
	}
}

