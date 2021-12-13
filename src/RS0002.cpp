#include <RS0002.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace RS0002_NS  {
	
		void from_json(const nlohmann::json& j, ProductInformation& x) {
			A205_json_get<std::string>(j, "manufacturer", x.manufacturer, x.manufacturer_is_set, false);
			A205_json_get<ASHRAE205_NS::Pattern>(j, "model_number", x.model_number, x.model_number_is_set, false);
		}
		const std::string_view ProductInformation::manufacturer_units = "";

		const std::string_view ProductInformation::model_number_units = "";

		const std::string_view ProductInformation::manufacturer_description = "Package manufacturer name";

		const std::string_view ProductInformation::model_number_description = "Package model number";

		const std::string_view ProductInformation::manufacturer_name = "manufacturer";

		const std::string_view ProductInformation::model_number_name = "model_number";

		void from_json(const nlohmann::json& j, RatingAHRI210240& x) {
			A205_json_get<std::string>(j, "certified_reference_number", x.certified_reference_number, x.certified_reference_number_is_set, true);
			A205_json_get<RS0002_NS::AHRI210240TestStandardYear>(j, "test_standard_year", x.test_standard_year, x.test_standard_year_is_set, true);
			A205_json_get<std::string>(j, "rating_source", x.rating_source, x.rating_source_is_set, false);
			A205_json_get<RS0002_NS::AHRI210240CompressorStagingType>(j, "staging_type", x.staging_type, x.staging_type_is_set, true);
			A205_json_get<double>(j, "seer", x.seer, x.seer_is_set, true);
			A205_json_get<double>(j, "eer_a_full", x.eer_a_full, x.eer_a_full_is_set, true);
			A205_json_get<double>(j, "eer_b_full", x.eer_b_full, x.eer_b_full_is_set, true);
			A205_json_get<double>(j, "cooling_a_full_capacity", x.cooling_a_full_capacity, x.cooling_a_full_capacity_is_set, true);
			A205_json_get<double>(j, "cooling_b_full_capacity", x.cooling_b_full_capacity, x.cooling_b_full_capacity_is_set, true);
			A205_json_get<double>(j, "cooling_b_low_capacity", x.cooling_b_low_capacity, x.cooling_b_low_capacity_is_set, true);
			A205_json_get<double>(j, "cooling_f_low_capacity", x.cooling_f_low_capacity, x.cooling_f_low_capacity_is_set, true);
			A205_json_get<double>(j, "cooling_a_full_power", x.cooling_a_full_power, x.cooling_a_full_power_is_set, true);
			A205_json_get<double>(j, "cooling_b_full_power", x.cooling_b_full_power, x.cooling_b_full_power_is_set, true);
			A205_json_get<double>(j, "cooling_b_low_power", x.cooling_b_low_power, x.cooling_b_low_power_is_set, true);
			A205_json_get<double>(j, "cooling_f_low_power", x.cooling_f_low_power, x.cooling_f_low_power_is_set, true);
			A205_json_get<double>(j, "cooling_full_fan_power", x.cooling_full_fan_power, x.cooling_full_fan_power_is_set, true);
			A205_json_get<double>(j, "cooling_full_air_volumetric_flow_rate", x.cooling_full_air_volumetric_flow_rate, x.cooling_full_air_volumetric_flow_rate_is_set, true);
			A205_json_get<double>(j, "cooling_low_fan_power", x.cooling_low_fan_power, x.cooling_low_fan_power_is_set, true);
			A205_json_get<double>(j, "cooling_low_air_volumetric_flow_rate", x.cooling_low_air_volumetric_flow_rate, x.cooling_low_air_volumetric_flow_rate_is_set, true);
			A205_json_get<bool>(j, "rating_reproducible_from_performance_data", x.rating_reproducible_from_performance_data, x.rating_reproducible_from_performance_data_is_set, true);
		}
		const std::string_view RatingAHRI210240::certified_reference_number_units = "";

		const std::string_view RatingAHRI210240::test_standard_year_units = "";

		const std::string_view RatingAHRI210240::rating_source_units = "";

		const std::string_view RatingAHRI210240::staging_type_units = "";

		const std::string_view RatingAHRI210240::seer_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::eer_a_full_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::eer_b_full_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::cooling_a_full_capacity_units = "Btu/h";

		const std::string_view RatingAHRI210240::cooling_b_full_capacity_units = "Btu/h";

		const std::string_view RatingAHRI210240::cooling_b_low_capacity_units = "Btu/h";

		const std::string_view RatingAHRI210240::cooling_f_low_capacity_units = "Btu/h";

		const std::string_view RatingAHRI210240::cooling_a_full_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_b_full_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_b_low_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_f_low_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_full_fan_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_full_air_volumetric_flow_rate_units = "cfm";

		const std::string_view RatingAHRI210240::cooling_low_fan_power_units = "W";

		const std::string_view RatingAHRI210240::cooling_low_air_volumetric_flow_rate_units = "cfm";

		const std::string_view RatingAHRI210240::rating_reproducible_from_performance_data_units = "";

		const std::string_view RatingAHRI210240::certified_reference_number_description = "AHRI certified reference number";

		const std::string_view RatingAHRI210240::test_standard_year_description = "Year of the AHRI test standard";

		const std::string_view RatingAHRI210240::rating_source_description = "Source of this rating data";

		const std::string_view RatingAHRI210240::staging_type_description = "Type of compressor staging";

		const std::string_view RatingAHRI210240::seer_description = "Seasonal Energy Efficiency Ratio";

		const std::string_view RatingAHRI210240::eer_a_full_description = "Full stage Energy Efficiency Ratio (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::eer_b_full_description = "Full stage Energy Efficiency Ratio (at 'B' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_a_full_capacity_description = "Full stage net total cooling capacity (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_b_full_capacity_description = "Full stage net total cooling capacity (at 'B' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_b_low_capacity_description = "Low stage net total cooling capacity (at 'B' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_f_low_capacity_description = "Low stage net total cooling capacity (at 'F' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_a_full_power_description = "Full stage net total cooling power (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_b_full_power_description = "Full stage net total cooling power (at 'B' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_b_low_power_description = "Low stage net total cooling power (at 'B' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_f_low_power_description = "Low stage net total cooling power (at 'F' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_full_fan_power_description = "Power of the indoor fan at full load";

		const std::string_view RatingAHRI210240::cooling_full_air_volumetric_flow_rate_description = "Standard air volumetric rate of the indoor fan at full load";

		const std::string_view RatingAHRI210240::cooling_low_fan_power_description = "Power of the indoor fan at low stage";

		const std::string_view RatingAHRI210240::cooling_low_air_volumetric_flow_rate_description = "Standard air volumetric rate of the indoor fan at low stage";

		const std::string_view RatingAHRI210240::rating_reproducible_from_performance_data_description = "Whether this rating can be reproduced using the performance data in the representation";

		const std::string_view RatingAHRI210240::certified_reference_number_name = "certified_reference_number";

		const std::string_view RatingAHRI210240::test_standard_year_name = "test_standard_year";

		const std::string_view RatingAHRI210240::rating_source_name = "rating_source";

		const std::string_view RatingAHRI210240::staging_type_name = "staging_type";

		const std::string_view RatingAHRI210240::seer_name = "seer";

		const std::string_view RatingAHRI210240::eer_a_full_name = "eer_a_full";

		const std::string_view RatingAHRI210240::eer_b_full_name = "eer_b_full";

		const std::string_view RatingAHRI210240::cooling_a_full_capacity_name = "cooling_a_full_capacity";

		const std::string_view RatingAHRI210240::cooling_b_full_capacity_name = "cooling_b_full_capacity";

		const std::string_view RatingAHRI210240::cooling_b_low_capacity_name = "cooling_b_low_capacity";

		const std::string_view RatingAHRI210240::cooling_f_low_capacity_name = "cooling_f_low_capacity";

		const std::string_view RatingAHRI210240::cooling_a_full_power_name = "cooling_a_full_power";

		const std::string_view RatingAHRI210240::cooling_b_full_power_name = "cooling_b_full_power";

		const std::string_view RatingAHRI210240::cooling_b_low_power_name = "cooling_b_low_power";

		const std::string_view RatingAHRI210240::cooling_f_low_power_name = "cooling_f_low_power";

		const std::string_view RatingAHRI210240::cooling_full_fan_power_name = "cooling_full_fan_power";

		const std::string_view RatingAHRI210240::cooling_full_air_volumetric_flow_rate_name = "cooling_full_air_volumetric_flow_rate";

		const std::string_view RatingAHRI210240::cooling_low_fan_power_name = "cooling_low_fan_power";

		const std::string_view RatingAHRI210240::cooling_low_air_volumetric_flow_rate_name = "cooling_low_air_volumetric_flow_rate";

		const std::string_view RatingAHRI210240::rating_reproducible_from_performance_data_name = "rating_reproducible_from_performance_data";

		void from_json(const nlohmann::json& j, RatingAHRI340360CoolingPartLoadPoint& x) {
			A205_json_get<double>(j, "capacity", x.capacity, x.capacity_is_set, true);
			A205_json_get<double>(j, "net_power", x.net_power, x.net_power_is_set, true);
			A205_json_get<double>(j, "indoor_fan_power", x.indoor_fan_power, x.indoor_fan_power_is_set, true);
			A205_json_get<double>(j, "auxiliary_power", x.auxiliary_power, x.auxiliary_power_is_set, true);
			A205_json_get<double>(j, "air_volumetric_flow_rate", x.air_volumetric_flow_rate, x.air_volumetric_flow_rate_is_set, true);
		}
		const std::string_view RatingAHRI340360CoolingPartLoadPoint::capacity_units = "Btu/h";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::net_power_units = "W";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::indoor_fan_power_units = "W";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::auxiliary_power_units = "W";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::air_volumetric_flow_rate_units = "cfm";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::capacity_description = "Net total cooling capacity";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::net_power_description = "Net cooling power (including the indoor fan motor, controls, and other auxiliary loads)";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::indoor_fan_power_description = "Power of the indoor fan motor";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::auxiliary_power_description = "Power of the control circuit and any other auxiliary loads";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::air_volumetric_flow_rate_description = "Standard air volumetric rate of the indoor fan";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::capacity_name = "capacity";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::net_power_name = "net_power";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::indoor_fan_power_name = "indoor_fan_power";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::auxiliary_power_name = "auxiliary_power";

		const std::string_view RatingAHRI340360CoolingPartLoadPoint::air_volumetric_flow_rate_name = "air_volumetric_flow_rate";

		void from_json(const nlohmann::json& j, RatingAHRI340360& x) {
			A205_json_get<std::string>(j, "certified_reference_number", x.certified_reference_number, x.certified_reference_number_is_set, true);
			A205_json_get<RS0002_NS::AHRI340360TestStandardYear>(j, "test_standard_year", x.test_standard_year, x.test_standard_year_is_set, true);
			A205_json_get<std::string>(j, "rating_source", x.rating_source, x.rating_source_is_set, false);
			A205_json_get<RS0002_NS::AHRI340360CapacityControlType>(j, "capacity_control_type", x.capacity_control_type, x.capacity_control_type_is_set, true);
			A205_json_get<double>(j, "ieer", x.ieer, x.ieer_is_set, true);
			A205_json_get<double>(j, "eer", x.eer, x.eer_is_set, true);
			A205_json_get<double>(j, "cooling_capacity", x.cooling_capacity, x.cooling_capacity_is_set, true);
			A205_json_get<std::vector<RS0002_NS::RatingAHRI340360CoolingPartLoadPoint>>(j, "part_load_points", x.part_load_points, x.part_load_points_is_set, false);
			A205_json_get<bool>(j, "rating_reproducible_from_performance_data", x.rating_reproducible_from_performance_data, x.rating_reproducible_from_performance_data_is_set, true);
		}
		const std::string_view RatingAHRI340360::certified_reference_number_units = "";

		const std::string_view RatingAHRI340360::test_standard_year_units = "";

		const std::string_view RatingAHRI340360::rating_source_units = "";

		const std::string_view RatingAHRI340360::capacity_control_type_units = "";

		const std::string_view RatingAHRI340360::ieer_units = "Btu/W-h";

		const std::string_view RatingAHRI340360::eer_units = "Btu/W-h";

		const std::string_view RatingAHRI340360::cooling_capacity_units = "Btu/h";

		const std::string_view RatingAHRI340360::part_load_points_units = "";

		const std::string_view RatingAHRI340360::rating_reproducible_from_performance_data_units = "";

		const std::string_view RatingAHRI340360::certified_reference_number_description = "AHRI Certified Reference Number";

		const std::string_view RatingAHRI340360::test_standard_year_description = "Name and version of the AHRI test standard";

		const std::string_view RatingAHRI340360::rating_source_description = "Source of this rating data";

		const std::string_view RatingAHRI340360::capacity_control_type_description = "Type of capacity control";

		const std::string_view RatingAHRI340360::ieer_description = "Integrated Energy Efficiency Ratio";

		const std::string_view RatingAHRI340360::eer_description = "Energy Efficiency Ratio at Standard Rating Conditions";

		const std::string_view RatingAHRI340360::cooling_capacity_description = "Net total cooling capacity at Standard Rating Conditions";

		const std::string_view RatingAHRI340360::part_load_points_description = "Four part load rating points";

		const std::string_view RatingAHRI340360::rating_reproducible_from_performance_data_description = "Whether this rating can be reproduced using the performance data in the representation";

		const std::string_view RatingAHRI340360::certified_reference_number_name = "certified_reference_number";

		const std::string_view RatingAHRI340360::test_standard_year_name = "test_standard_year";

		const std::string_view RatingAHRI340360::rating_source_name = "rating_source";

		const std::string_view RatingAHRI340360::capacity_control_type_name = "capacity_control_type";

		const std::string_view RatingAHRI340360::ieer_name = "ieer";

		const std::string_view RatingAHRI340360::eer_name = "eer";

		const std::string_view RatingAHRI340360::cooling_capacity_name = "cooling_capacity";

		const std::string_view RatingAHRI340360::part_load_points_name = "part_load_points";

		const std::string_view RatingAHRI340360::rating_reproducible_from_performance_data_name = "rating_reproducible_from_performance_data";

		void from_json(const nlohmann::json& j, Description& x) {
			A205_json_get<RS0002_NS::ProductInformation>(j, "product_information", x.product_information, x.product_information_is_set, false);
			A205_json_get<RS0002_NS::RatingAHRI210240>(j, "rating_ahri_210_240", x.rating_ahri_210_240, x.rating_ahri_210_240_is_set, false);
			A205_json_get<RS0002_NS::RatingAHRI340360>(j, "rating_ahri_340_360", x.rating_ahri_340_360, x.rating_ahri_340_360_is_set, false);
		}
		const std::string_view Description::product_information_units = "";

		const std::string_view Description::rating_ahri_210_240_units = "";

		const std::string_view Description::rating_ahri_340_360_units = "";

		const std::string_view Description::product_information_description = "Data group describing product information";

		const std::string_view Description::rating_ahri_210_240_description = "Data group containing information relevant to products rated under AHRI 210/240";

		const std::string_view Description::rating_ahri_340_360_description = "Data group containing information relevant to products rated under AHRI 340/360";

		const std::string_view Description::product_information_name = "product_information";

		const std::string_view Description::rating_ahri_210_240_name = "rating_ahri_210_240";

		const std::string_view Description::rating_ahri_340_360_name = "rating_ahri_340_360";

		void from_json(const nlohmann::json& j, Performance& x) {
			A205_json_get<double>(j, "standby_power", x.standby_power, x.standby_power_is_set, true);
			A205_json_get<RS0003_NS::RS0003>(j, "fan_representation", x.fan_representation, x.fan_representation_is_set, false);
			A205_json_get<RS0002_NS::FanPosition>(j, "fan_position", x.fan_position, x.fan_position_is_set, true);
			A205_json_get<RS0004_NS::RS0004>(j, "dx_system_representation", x.dx_system_representation, x.dx_system_representation_is_set, false);
		}
		const std::string_view Performance::standby_power_units = "W";

		const std::string_view Performance::fan_representation_units = "";

		const std::string_view Performance::fan_position_units = "";

		const std::string_view Performance::dx_system_representation_units = "";

		const std::string_view Performance::standby_power_description = "Continuous unit power draw regardless of fan or DX system operation";

		const std::string_view Performance::fan_representation_description = "The corresponding Standard 205 fan assembly representation";

		const std::string_view Performance::fan_position_description = "Position of the fan relative to the cooling coil";

		const std::string_view Performance::dx_system_representation_description = "The corresponding Standard 205 direct expansion coil system representation";

		const std::string_view Performance::standby_power_name = "standby_power";

		const std::string_view Performance::fan_representation_name = "fan_representation";

		const std::string_view Performance::fan_position_name = "fan_position";

		const std::string_view Performance::dx_system_representation_name = "dx_system_representation";

		void RS0002::Initialize(const nlohmann::json& j) {
			A205_json_get<ASHRAE205_NS::Metadata>(j, "metadata", metadata, metadata_is_set, true);
			A205_json_get<RS0002_NS::Description>(j, "description", description, description_is_set, false);
			A205_json_get<RS0002_NS::Performance>(j, "performance", performance, performance_is_set, true);
		}
		const std::string_view RS0002::metadata_units = "";

		const std::string_view RS0002::description_units = "";

		const std::string_view RS0002::performance_units = "";

		const std::string_view RS0002::metadata_description = "Metadata data group";

		const std::string_view RS0002::description_description = "Data group describing product and rating information";

		const std::string_view RS0002::performance_description = "Data group containing performance information";

		const std::string_view RS0002::metadata_name = "metadata";

		const std::string_view RS0002::description_name = "description";

		const std::string_view RS0002::performance_name = "performance";

		void from_json(const nlohmann::json& j, RS0002& x) {
			x.Initialize(j);
		}
	}
}

