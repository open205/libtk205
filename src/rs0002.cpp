#include <rs0002.h>
#include <loadobject_205.h>

namespace tk205  {

	namespace rs0002_ns  {
	
		const std::string_view Schema::schema_title = "Unitary Cooling Air-Conditioning Equipment";

		const std::string_view Schema::schema_version = "2.0.0";

		const std::string_view Schema::schema_description = "Schema for ASHRAE 205 annex RS0002: Unitary Cooling Air-Conditioning Equipment";

		void from_json(const nlohmann::json& j, ProductInformation& x) {
			a205_json_get<std::string>(j, *RS0002::logger, "manufacturer", x.manufacturer, x.manufacturer_is_set, false);
			a205_json_get<ashrae205_ns::Pattern>(j, *RS0002::logger, "model_number", x.model_number, x.model_number_is_set, false);
		}
		const std::string_view ProductInformation::manufacturer_units = "";

		const std::string_view ProductInformation::model_number_units = "";

		const std::string_view ProductInformation::manufacturer_description = "Package manufacturer name";

		const std::string_view ProductInformation::model_number_description = "Package model number";

		const std::string_view ProductInformation::manufacturer_name = "manufacturer";

		const std::string_view ProductInformation::model_number_name = "model_number";

		void from_json(const nlohmann::json& j, RatingAHRI210240& x) {
			a205_json_get<std::string>(j, *RS0002::logger, "certified_reference_number", x.certified_reference_number, x.certified_reference_number_is_set, false);
			a205_json_get<rs0002_ns::AHRI210240TestStandardYear>(j, *RS0002::logger, "test_standard_year", x.test_standard_year, x.test_standard_year_is_set, false);
			a205_json_get<std::string>(j, *RS0002::logger, "rating_source", x.rating_source, x.rating_source_is_set, false);
			a205_json_get<rs0002_ns::AHRI210240CompressorStagingType>(j, *RS0002::logger, "staging_type", x.staging_type, x.staging_type_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "seer", x.seer, x.seer_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "seer2", x.seer2, x.seer2_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "eer", x.eer, x.eer_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "eer2", x.eer2, x.eer2_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "cooling_capacity", x.cooling_capacity, x.cooling_capacity_is_set, false);
		}
		const std::string_view RatingAHRI210240::certified_reference_number_units = "";

		const std::string_view RatingAHRI210240::test_standard_year_units = "";

		const std::string_view RatingAHRI210240::rating_source_units = "";

		const std::string_view RatingAHRI210240::staging_type_units = "";

		const std::string_view RatingAHRI210240::seer_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::seer2_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::eer_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::eer2_units = "Btu/W-h";

		const std::string_view RatingAHRI210240::cooling_capacity_units = "Btu/h";

		const std::string_view RatingAHRI210240::certified_reference_number_description = "AHRI certified reference number";

		const std::string_view RatingAHRI210240::test_standard_year_description = "Year of the AHRI test standard";

		const std::string_view RatingAHRI210240::rating_source_description = "Source of this rating data";

		const std::string_view RatingAHRI210240::staging_type_description = "Type of compressor staging";

		const std::string_view RatingAHRI210240::seer_description = "Seasonal Energy Efficiency Ratio";

		const std::string_view RatingAHRI210240::seer2_description = "Seasonal Energy Efficiency Ratio";

		const std::string_view RatingAHRI210240::eer_description = "Full stage Energy Efficiency Ratio (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::eer2_description = "Full stage Energy Efficiency Ratio (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::cooling_capacity_description = "Full stage net total cooling capacity (at 'A' operating conditions)";

		const std::string_view RatingAHRI210240::certified_reference_number_name = "certified_reference_number";

		const std::string_view RatingAHRI210240::test_standard_year_name = "test_standard_year";

		const std::string_view RatingAHRI210240::rating_source_name = "rating_source";

		const std::string_view RatingAHRI210240::staging_type_name = "staging_type";

		const std::string_view RatingAHRI210240::seer_name = "seer";

		const std::string_view RatingAHRI210240::seer2_name = "seer2";

		const std::string_view RatingAHRI210240::eer_name = "eer";

		const std::string_view RatingAHRI210240::eer2_name = "eer2";

		const std::string_view RatingAHRI210240::cooling_capacity_name = "cooling_capacity";

		void from_json(const nlohmann::json& j, RatingAHRI340360& x) {
			a205_json_get<std::string>(j, *RS0002::logger, "certified_reference_number", x.certified_reference_number, x.certified_reference_number_is_set, false);
			a205_json_get<rs0002_ns::AHRI340360TestStandardYear>(j, *RS0002::logger, "test_standard_year", x.test_standard_year, x.test_standard_year_is_set, false);
			a205_json_get<std::string>(j, *RS0002::logger, "rating_source", x.rating_source, x.rating_source_is_set, false);
			a205_json_get<rs0002_ns::AHRI340360CapacityControlType>(j, *RS0002::logger, "capacity_control_type", x.capacity_control_type, x.capacity_control_type_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "ieer", x.ieer, x.ieer_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "eer", x.eer, x.eer_is_set, false);
			a205_json_get<double>(j, *RS0002::logger, "cooling_capacity", x.cooling_capacity, x.cooling_capacity_is_set, false);
		}
		const std::string_view RatingAHRI340360::certified_reference_number_units = "";

		const std::string_view RatingAHRI340360::test_standard_year_units = "";

		const std::string_view RatingAHRI340360::rating_source_units = "";

		const std::string_view RatingAHRI340360::capacity_control_type_units = "";

		const std::string_view RatingAHRI340360::ieer_units = "Btu/W-h";

		const std::string_view RatingAHRI340360::eer_units = "Btu/W-h";

		const std::string_view RatingAHRI340360::cooling_capacity_units = "Btu/h";

		const std::string_view RatingAHRI340360::certified_reference_number_description = "AHRI Certified Reference Number";

		const std::string_view RatingAHRI340360::test_standard_year_description = "Name and version of the AHRI test standard";

		const std::string_view RatingAHRI340360::rating_source_description = "Source of this rating data";

		const std::string_view RatingAHRI340360::capacity_control_type_description = "Type of capacity control";

		const std::string_view RatingAHRI340360::ieer_description = "Integrated Energy Efficiency Ratio";

		const std::string_view RatingAHRI340360::eer_description = "Energy Efficiency Ratio at Standard Rating Conditions";

		const std::string_view RatingAHRI340360::cooling_capacity_description = "Net total cooling capacity at Standard Rating Conditions";

		const std::string_view RatingAHRI340360::certified_reference_number_name = "certified_reference_number";

		const std::string_view RatingAHRI340360::test_standard_year_name = "test_standard_year";

		const std::string_view RatingAHRI340360::rating_source_name = "rating_source";

		const std::string_view RatingAHRI340360::capacity_control_type_name = "capacity_control_type";

		const std::string_view RatingAHRI340360::ieer_name = "ieer";

		const std::string_view RatingAHRI340360::eer_name = "eer";

		const std::string_view RatingAHRI340360::cooling_capacity_name = "cooling_capacity";

		void from_json(const nlohmann::json& j, Description& x) {
			a205_json_get<rs0002_ns::ProductInformation>(j, *RS0002::logger, "product_information", x.product_information, x.product_information_is_set, false);
			a205_json_get<rs0002_ns::RatingAHRI210240>(j, *RS0002::logger, "rating_ahri_210_240", x.rating_ahri_210_240, x.rating_ahri_210_240_is_set, false);
			a205_json_get<rs0002_ns::RatingAHRI340360>(j, *RS0002::logger, "rating_ahri_340_360", x.rating_ahri_340_360, x.rating_ahri_340_360_is_set, false);
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
			a205_json_get<double>(j, *RS0002::logger, "standby_power", x.standby_power, x.standby_power_is_set, true);
			a205_json_get<rs0003_ns::RS0003>(j, *RS0002::logger, "indoor_fan_representation", x.indoor_fan_representation, x.indoor_fan_representation_is_set, false);
			a205_json_get<rs0002_ns::FanPosition>(j, *RS0002::logger, "fan_position", x.fan_position, x.fan_position_is_set, true);
			a205_json_get<rs0004_ns::RS0004>(j, *RS0002::logger, "dx_system_representation", x.dx_system_representation, x.dx_system_representation_is_set, true);
			a205_json_get<ashrae205_ns::Scaling>(j, *RS0002::logger, "scaling", x.scaling, x.scaling_is_set, false);
		}
		const std::string_view Performance::standby_power_units = "W";

		const std::string_view Performance::indoor_fan_representation_units = "";

		const std::string_view Performance::fan_position_units = "";

		const std::string_view Performance::dx_system_representation_units = "";

		const std::string_view Performance::scaling_units = "";

		const std::string_view Performance::standby_power_description = "Continuous unit power draw regardless of fan or DX system operation";

		const std::string_view Performance::indoor_fan_representation_description = "The corresponding Standard 205 fan assembly representation";

		const std::string_view Performance::fan_position_description = "Position of the fan relative to the cooling coil";

		const std::string_view Performance::dx_system_representation_description = "The corresponding Standard 205 direct expansion system representation";

		const std::string_view Performance::scaling_description = "Specifies the range the performance data can be scaled to represent different capacity equipment";

		const std::string_view Performance::standby_power_name = "standby_power";

		const std::string_view Performance::indoor_fan_representation_name = "indoor_fan_representation";

		const std::string_view Performance::fan_position_name = "fan_position";

		const std::string_view Performance::dx_system_representation_name = "dx_system_representation";

		const std::string_view Performance::scaling_name = "scaling";

		void from_json(const nlohmann::json& j, RS0002& x) {
			a205_json_get<ashrae205_ns::Metadata>(j, *RS0002::logger, "metadata", x.metadata, x.metadata_is_set, true);
			a205_json_get<rs0002_ns::Description>(j, *RS0002::logger, "description", x.description, x.description_is_set, false);
			a205_json_get<rs0002_ns::Performance>(j, *RS0002::logger, "performance", x.performance, x.performance_is_set, true);
		}
		void RS0002::initialize(const nlohmann::json& j) {
			a205_json_get<ashrae205_ns::Metadata>(j, *RS0002::logger, "metadata", metadata, metadata_is_set, true);
			a205_json_get<rs0002_ns::Description>(j, *RS0002::logger, "description", description, description_is_set, false);
			a205_json_get<rs0002_ns::Performance>(j, *RS0002::logger, "performance", performance, performance_is_set, true);
		}
		 std::shared_ptr<Courierr::Courierr> RS0002::logger {};

		const std::string_view RS0002::metadata_units = "";

		const std::string_view RS0002::description_units = "";

		const std::string_view RS0002::performance_units = "";

		const std::string_view RS0002::metadata_description = "Metadata data group";

		const std::string_view RS0002::description_description = "Data group describing product and rating information";

		const std::string_view RS0002::performance_description = "Data group containing performance information";

		const std::string_view RS0002::metadata_name = "metadata";

		const std::string_view RS0002::description_name = "description";

		const std::string_view RS0002::performance_name = "performance";

	}
}

