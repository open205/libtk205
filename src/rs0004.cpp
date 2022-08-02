#include <RS0004.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace RS0004_NS  {
	
		void from_json(const nlohmann::json& j, ProductInformation& x) {
			A205_json_get<std::string>(j, "outdoor_unit_manufacturer", x.outdoor_unit_manufacturer, x.outdoor_unit_manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "outdoor_unit_model_number", x.outdoor_unit_model_number, x.outdoor_unit_model_number_is_set, false);
			A205_json_get<std::string>(j, "indoor_unit_manufacturer", x.indoor_unit_manufacturer, x.indoor_unit_manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "indoor_unit_model_number", x.indoor_unit_model_number, x.indoor_unit_model_number_is_set, false);
			A205_json_get<std::string>(j, "refrigerant", x.refrigerant, x.refrigerant_is_set, false);
			A205_json_get<ASHRAE205_NS::CompressorType>(j, "compressor_type", x.compressor_type, x.compressor_type_is_set, false);
		}
		const std::string_view ProductInformation::outdoor_unit_manufacturer_units = "";

		const std::string_view ProductInformation::outdoor_unit_model_number_units = "";

		const std::string_view ProductInformation::indoor_unit_manufacturer_units = "";

		const std::string_view ProductInformation::indoor_unit_model_number_units = "";

		const std::string_view ProductInformation::refrigerant_units = "";

		const std::string_view ProductInformation::compressor_type_units = "";

		const std::string_view ProductInformation::outdoor_unit_manufacturer_description = "Outdoor unit manufacturer name";

		const std::string_view ProductInformation::outdoor_unit_model_number_description = "Outdoor unit model number";

		const std::string_view ProductInformation::indoor_unit_manufacturer_description = "Indoor unit manufacturer name";

		const std::string_view ProductInformation::indoor_unit_model_number_description = "Indoor unit model number";

		const std::string_view ProductInformation::refrigerant_description = "Refrigerant used";

		const std::string_view ProductInformation::compressor_type_description = "Type of compressor";

		const std::string_view ProductInformation::outdoor_unit_manufacturer_name = "outdoor_unit_manufacturer";

		const std::string_view ProductInformation::outdoor_unit_model_number_name = "outdoor_unit_model_number";

		const std::string_view ProductInformation::indoor_unit_manufacturer_name = "indoor_unit_manufacturer";

		const std::string_view ProductInformation::indoor_unit_model_number_name = "indoor_unit_model_number";

		const std::string_view ProductInformation::refrigerant_name = "refrigerant";

		const std::string_view ProductInformation::compressor_type_name = "compressor_type";

		void from_json(const nlohmann::json& j, Description& x) {
			A205_json_get<RS0004_NS::ProductInformation>(j, "product_information", x.product_information, x.product_information_is_set, false);
		}
		const std::string_view Description::product_information_units = "";

		const std::string_view Description::product_information_description = "Data group describing product information";

		const std::string_view Description::product_information_name = "product_information";

		void from_json(const nlohmann::json& j, GridVariablesCooling& x) {
			A205_json_get<std::vector<double>>(j, "outdoor_coil_entering_dry_bulb_temperature", x.outdoor_coil_entering_dry_bulb_temperature, x.outdoor_coil_entering_dry_bulb_temperature_is_set, true);
			A205_json_get<std::vector<double>>(j, "indoor_coil_entering_relative_humidity", x.indoor_coil_entering_relative_humidity, x.indoor_coil_entering_relative_humidity_is_set, true);
			A205_json_get<std::vector<double>>(j, "indoor_coil_entering_dry_bulb_temperature", x.indoor_coil_entering_dry_bulb_temperature, x.indoor_coil_entering_dry_bulb_temperature_is_set, true);
			A205_json_get<std::vector<double>>(j, "indoor_coil_air_mass_flow_rate", x.indoor_coil_air_mass_flow_rate, x.indoor_coil_air_mass_flow_rate_is_set, true);
			A205_json_get<std::vector<int>>(j, "compressor_sequence_number", x.compressor_sequence_number, x.compressor_sequence_number_is_set, true);
			A205_json_get<std::vector<double>>(j, "ambient_absolute_air_pressure", x.ambient_absolute_air_pressure, x.ambient_absolute_air_pressure_is_set, true);
		}
		void GridVariablesCooling::Populate_performance_map(performance_map_base* performance_map) {
			Add_grid_axis(performance_map, outdoor_coil_entering_dry_bulb_temperature);
			Add_grid_axis(performance_map, indoor_coil_entering_relative_humidity);
			Add_grid_axis(performance_map, indoor_coil_entering_dry_bulb_temperature);
			Add_grid_axis(performance_map, indoor_coil_air_mass_flow_rate);
			Add_grid_axis(performance_map, compressor_sequence_number);
			Add_grid_axis(performance_map, ambient_absolute_air_pressure);
			performance_map->Finalize_grid();
		}
		const std::string_view GridVariablesCooling::outdoor_coil_entering_dry_bulb_temperature_units = "K";

		const std::string_view GridVariablesCooling::indoor_coil_entering_relative_humidity_units = "-";

		const std::string_view GridVariablesCooling::indoor_coil_entering_dry_bulb_temperature_units = "K";

		const std::string_view GridVariablesCooling::indoor_coil_air_mass_flow_rate_units = "kg/s";

		const std::string_view GridVariablesCooling::compressor_sequence_number_units = "-";

		const std::string_view GridVariablesCooling::ambient_absolute_air_pressure_units = "Pa";

		const std::string_view GridVariablesCooling::outdoor_coil_entering_dry_bulb_temperature_description = "Dry bulb temperature of the air entering the outdoor coil";

		const std::string_view GridVariablesCooling::indoor_coil_entering_relative_humidity_description = "Relative humidity of the air entering the indoor coil";

		const std::string_view GridVariablesCooling::indoor_coil_entering_dry_bulb_temperature_description = "Dry bulb temperature of the air entering the indoor coil";

		const std::string_view GridVariablesCooling::indoor_coil_air_mass_flow_rate_description = "Mass flow rate of air entering the indoor coil";

		const std::string_view GridVariablesCooling::compressor_sequence_number_description = "Index indicating the relative capacity order of the compressor speed/stage expressed in order from lowest capacity (starting at 1) to highest capacity";

		const std::string_view GridVariablesCooling::ambient_absolute_air_pressure_description = "Ambient absolute air pressure";

		const std::string_view GridVariablesCooling::outdoor_coil_entering_dry_bulb_temperature_name = "outdoor_coil_entering_dry_bulb_temperature";

		const std::string_view GridVariablesCooling::indoor_coil_entering_relative_humidity_name = "indoor_coil_entering_relative_humidity";

		const std::string_view GridVariablesCooling::indoor_coil_entering_dry_bulb_temperature_name = "indoor_coil_entering_dry_bulb_temperature";

		const std::string_view GridVariablesCooling::indoor_coil_air_mass_flow_rate_name = "indoor_coil_air_mass_flow_rate";

		const std::string_view GridVariablesCooling::compressor_sequence_number_name = "compressor_sequence_number";

		const std::string_view GridVariablesCooling::ambient_absolute_air_pressure_name = "ambient_absolute_air_pressure";

		void from_json(const nlohmann::json& j, LookupVariablesCooling& x) {
			A205_json_get<std::vector<double>>(j, "gross_total_capacity", x.gross_total_capacity, x.gross_total_capacity_is_set, true);
			A205_json_get<std::vector<double>>(j, "gross_sensible_capacity", x.gross_sensible_capacity, x.gross_sensible_capacity_is_set, true);
			A205_json_get<std::vector<double>>(j, "gross_power", x.gross_power, x.gross_power_is_set, true);
		}
		void LookupVariablesCooling::Populate_performance_map(performance_map_base* performance_map) {
			Add_data_table(performance_map, gross_total_capacity);
			Add_data_table(performance_map, gross_sensible_capacity);
			Add_data_table(performance_map, gross_power);
		}
		const std::string_view LookupVariablesCooling::gross_total_capacity_units = "W";

		const std::string_view LookupVariablesCooling::gross_sensible_capacity_units = "W";

		const std::string_view LookupVariablesCooling::gross_power_units = "W";

		const std::string_view LookupVariablesCooling::gross_total_capacity_description = "Total heat removed by the indoor coil";

		const std::string_view LookupVariablesCooling::gross_sensible_capacity_description = "Sensible heat removed by the indoor coil";

		const std::string_view LookupVariablesCooling::gross_power_description = "Gross power draw (of the outdoor unit)";

		const std::string_view LookupVariablesCooling::gross_total_capacity_name = "gross_total_capacity";

		const std::string_view LookupVariablesCooling::gross_sensible_capacity_name = "gross_sensible_capacity";

		const std::string_view LookupVariablesCooling::gross_power_name = "gross_power";

		void from_json(const nlohmann::json& j, PerformanceMapCooling& x) {
			A205_json_get<RS0004_NS::GridVariablesCooling>(j, "grid_variables", x.grid_variables, x.grid_variables_is_set, true);
			x.grid_variables.Populate_performance_map(&x);
			A205_json_get<RS0004_NS::LookupVariablesCooling>(j, "lookup_variables", x.lookup_variables, x.lookup_variables_is_set, true);
			x.lookup_variables.Populate_performance_map(&x);
		}
		void PerformanceMapCooling::Initialize(const nlohmann::json& j) {
			A205_json_get<RS0004_NS::GridVariablesCooling>(j, "grid_variables", grid_variables, grid_variables_is_set, true);
			grid_variables.Populate_performance_map(this);
			A205_json_get<RS0004_NS::LookupVariablesCooling>(j, "lookup_variables", lookup_variables, lookup_variables_is_set, true);
			lookup_variables.Populate_performance_map(this);
		}
		const std::string_view PerformanceMapCooling::grid_variables_units = "";

		const std::string_view PerformanceMapCooling::lookup_variables_units = "";

		const std::string_view PerformanceMapCooling::grid_variables_description = "Data group defining the grid variables for cooling performance";

		const std::string_view PerformanceMapCooling::lookup_variables_description = "Data group defining the lookup variables for cooling performance";

		const std::string_view PerformanceMapCooling::grid_variables_name = "grid_variables";

		const std::string_view PerformanceMapCooling::lookup_variables_name = "lookup_variables";

		LookupVariablesCoolingStruct PerformanceMapCooling::Calculate_performance(double outdoor_coil_entering_dry_bulb_temperature, double indoor_coil_entering_relative_humidity, double indoor_coil_entering_dry_bulb_temperature, double indoor_coil_air_mass_flow_rate, double compressor_sequence_number, double ambient_absolute_air_pressure) {
			std::vector<double> target {outdoor_coil_entering_dry_bulb_temperature, indoor_coil_entering_relative_humidity, indoor_coil_entering_dry_bulb_temperature, indoor_coil_air_mass_flow_rate, compressor_sequence_number, ambient_absolute_air_pressure};
			auto v = performance_map_base::Calculate_performance(target);
			LookupVariablesCoolingStruct s {v[0], v[1], v[2], };
			return s;
		}
		void from_json(const nlohmann::json& j, GridVariablesStandby& x) {
			A205_json_get<std::vector<double>>(j, "outdoor_coil_environment_dry_bulb_temperature", x.outdoor_coil_environment_dry_bulb_temperature, x.outdoor_coil_environment_dry_bulb_temperature_is_set, true);
		}
		void GridVariablesStandby::Populate_performance_map(performance_map_base* performance_map) {
			Add_grid_axis(performance_map, outdoor_coil_environment_dry_bulb_temperature);
			performance_map->Finalize_grid();
		}
		const std::string_view GridVariablesStandby::outdoor_coil_environment_dry_bulb_temperature_units = "K";

		const std::string_view GridVariablesStandby::outdoor_coil_environment_dry_bulb_temperature_description = "Dry bulb temperature of the air in the environment of the outdoor coil";

		const std::string_view GridVariablesStandby::outdoor_coil_environment_dry_bulb_temperature_name = "outdoor_coil_environment_dry_bulb_temperature";

		void from_json(const nlohmann::json& j, LookupVariablesStandby& x) {
			A205_json_get<std::vector<double>>(j, "gross_power", x.gross_power, x.gross_power_is_set, true);
		}
		void LookupVariablesStandby::Populate_performance_map(performance_map_base* performance_map) {
			Add_data_table(performance_map, gross_power);
		}
		const std::string_view LookupVariablesStandby::gross_power_units = "W";

		const std::string_view LookupVariablesStandby::gross_power_description = "Gross power draw (of the outdoor unit)";

		const std::string_view LookupVariablesStandby::gross_power_name = "gross_power";

		void from_json(const nlohmann::json& j, PerformanceMapStandby& x) {
			A205_json_get<RS0004_NS::GridVariablesStandby>(j, "grid_variables", x.grid_variables, x.grid_variables_is_set, true);
			x.grid_variables.Populate_performance_map(&x);
			A205_json_get<RS0004_NS::LookupVariablesStandby>(j, "lookup_variables", x.lookup_variables, x.lookup_variables_is_set, true);
			x.lookup_variables.Populate_performance_map(&x);
		}
		void PerformanceMapStandby::Initialize(const nlohmann::json& j) {
			A205_json_get<RS0004_NS::GridVariablesStandby>(j, "grid_variables", grid_variables, grid_variables_is_set, true);
			grid_variables.Populate_performance_map(this);
			A205_json_get<RS0004_NS::LookupVariablesStandby>(j, "lookup_variables", lookup_variables, lookup_variables_is_set, true);
			lookup_variables.Populate_performance_map(this);
		}
		const std::string_view PerformanceMapStandby::grid_variables_units = "";

		const std::string_view PerformanceMapStandby::lookup_variables_units = "";

		const std::string_view PerformanceMapStandby::grid_variables_description = "Data group defining the grid variables for standby performance";

		const std::string_view PerformanceMapStandby::lookup_variables_description = "Data group defining the lookup variables for standby performance";

		const std::string_view PerformanceMapStandby::grid_variables_name = "grid_variables";

		const std::string_view PerformanceMapStandby::lookup_variables_name = "lookup_variables";

		LookupVariablesStandbyStruct PerformanceMapStandby::Calculate_performance(double outdoor_coil_environment_dry_bulb_temperature) {
			std::vector<double> target {outdoor_coil_environment_dry_bulb_temperature};
			auto v = performance_map_base::Calculate_performance(target);
			LookupVariablesStandbyStruct s {v[0], };
			return s;
		}
		void from_json(const nlohmann::json& j, Performance& x) {
			A205_json_get<ASHRAE205_NS::CompressorSpeedControlType>(j, "compressor_speed_control_type", x.compressor_speed_control_type, x.compressor_speed_control_type_is_set, true);
			A205_json_get<double>(j, "cycling_degradation_coefficient", x.cycling_degradation_coefficient, x.cycling_degradation_coefficient_is_set, true);
			A205_json_get<RS0004_NS::PerformanceMapCooling>(j, "performance_map_cooling", x.performance_map_cooling, x.performance_map_cooling_is_set, true);
			A205_json_get<RS0004_NS::PerformanceMapStandby>(j, "performance_map_standby", x.performance_map_standby, x.performance_map_standby_is_set, true);
		}
		const std::string_view Performance::compressor_speed_control_type_units = "";

		const std::string_view Performance::cycling_degradation_coefficient_units = "-";

		const std::string_view Performance::performance_map_cooling_units = "";

		const std::string_view Performance::performance_map_standby_units = "";

		const std::string_view Performance::compressor_speed_control_type_description = "Method used to control different speeds of the compressor";

		const std::string_view Performance::cycling_degradation_coefficient_description = "Cycling degradation coefficient (C<sub>D</sub>) as described in AHRI 210/240";

		const std::string_view Performance::performance_map_cooling_description = "Data group describing cooling performance over a range of conditions";

		const std::string_view Performance::performance_map_standby_description = "Data group describing standby performance";

		const std::string_view Performance::compressor_speed_control_type_name = "compressor_speed_control_type";

		const std::string_view Performance::cycling_degradation_coefficient_name = "cycling_degradation_coefficient";

		const std::string_view Performance::performance_map_cooling_name = "performance_map_cooling";

		const std::string_view Performance::performance_map_standby_name = "performance_map_standby";

		void RS0004::Initialize(const nlohmann::json& j) {
			A205_json_get<ASHRAE205_NS::Metadata>(j, "metadata", metadata, metadata_is_set, true);
			A205_json_get<RS0004_NS::Description>(j, "description", description, description_is_set, false);
			A205_json_get<RS0004_NS::Performance>(j, "performance", performance, performance_is_set, true);
		}
		const std::string_view RS0004::metadata_units = "";

		const std::string_view RS0004::description_units = "";

		const std::string_view RS0004::performance_units = "";

		const std::string_view RS0004::metadata_description = "Metadata data group";

		const std::string_view RS0004::description_description = "Data group describing product and rating information";

		const std::string_view RS0004::performance_description = "Data group containing performance information";

		const std::string_view RS0004::metadata_name = "metadata";

		const std::string_view RS0004::description_name = "description";

		const std::string_view RS0004::performance_name = "performance";

		void from_json(const nlohmann::json& j, RS0004& x) {
			x.Initialize(j);
		}
	}
}

