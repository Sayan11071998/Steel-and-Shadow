// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteelAndShadow/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}

// Begin Cross Module References
STEELANDSHADOW_API UEnum* Z_Construct_UEnum_SteelAndShadow_EActionState();
STEELANDSHADOW_API UEnum* Z_Construct_UEnum_SteelAndShadow_ECharacterState();
STEELANDSHADOW_API UEnum* Z_Construct_UEnum_SteelAndShadow_EDeathPose();
UPackage* Z_Construct_UPackage__Script_SteelAndShadow();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteelAndShadow_ECharacterState, (UObject*)Z_Construct_UPackage__Script_SteelAndShadow(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> STEELANDSHADOW_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_EquippedOneHandedWeapon.DisplayName", "Equipped One-Handed Weapon" },
		{ "ECS_EquippedOneHandedWeapon.Name", "ECharacterState::ECS_EquippedOneHandedWeapon" },
		{ "ECS_EquippedTwoHandedWeapon.DisplayName", "Equipped Two-Handed Weapon" },
		{ "ECS_EquippedTwoHandedWeapon.Name", "ECharacterState::ECS_EquippedTwoHandedWeapon" },
		{ "ECS_Unequipped.DisplayName", "Unequipped" },
		{ "ECS_Unequipped.Name", "ECharacterState::ECS_Unequipped" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Unequipped", (int64)ECharacterState::ECS_Unequipped },
		{ "ECharacterState::ECS_EquippedOneHandedWeapon", (int64)ECharacterState::ECS_EquippedOneHandedWeapon },
		{ "ECharacterState::ECS_EquippedTwoHandedWeapon", (int64)ECharacterState::ECS_EquippedTwoHandedWeapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteelAndShadow,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteelAndShadow_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_SteelAndShadow_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Enum EActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionState;
static UEnum* EActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteelAndShadow_EActionState, (UObject*)Z_Construct_UPackage__Script_SteelAndShadow(), TEXT("EActionState"));
	}
	return Z_Registration_Info_UEnum_EActionState.OuterSingleton;
}
template<> STEELANDSHADOW_API UEnum* StaticEnum<EActionState>()
{
	return EActionState_StaticEnum();
}
struct Z_Construct_UEnum_SteelAndShadow_EActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_Attaking.DisplayName", "Attacking" },
		{ "EAS_Attaking.Name", "EActionState::EAS_Attaking" },
		{ "EAS_EquippingWeapon.DisplayName", "EquippingWeapon" },
		{ "EAS_EquippingWeapon.Name", "EActionState::EAS_EquippingWeapon" },
		{ "EAS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EAS_Unoccupied.Name", "EActionState::EAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActionState::EAS_Unoccupied", (int64)EActionState::EAS_Unoccupied },
		{ "EActionState::EAS_Attaking", (int64)EActionState::EAS_Attaking },
		{ "EActionState::EAS_EquippingWeapon", (int64)EActionState::EAS_EquippingWeapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteelAndShadow,
	nullptr,
	"EActionState",
	"EActionState",
	Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteelAndShadow_EActionState()
{
	if (!Z_Registration_Info_UEnum_EActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionState.InnerSingleton, Z_Construct_UEnum_SteelAndShadow_EActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActionState.InnerSingleton;
}
// End Enum EActionState

// Begin Enum EDeathPose
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeathPose;
static UEnum* EDeathPose_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeathPose.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeathPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteelAndShadow_EDeathPose, (UObject*)Z_Construct_UPackage__Script_SteelAndShadow(), TEXT("EDeathPose"));
	}
	return Z_Registration_Info_UEnum_EDeathPose.OuterSingleton;
}
template<> STEELANDSHADOW_API UEnum* StaticEnum<EDeathPose>()
{
	return EDeathPose_StaticEnum();
}
struct Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDP_Alive.DisplayName", "Alive" },
		{ "EDP_Alive.Name", "EDeathPose::EDP_Alive" },
		{ "EDP_Death1.DisplayName", "Death1" },
		{ "EDP_Death1.Name", "EDeathPose::EDP_Death1" },
		{ "EDP_Death2.DisplayName", "Death2" },
		{ "EDP_Death2.Name", "EDeathPose::EDP_Death2" },
		{ "EDP_Death3.DisplayName", "Death3" },
		{ "EDP_Death3.Name", "EDeathPose::EDP_Death3" },
		{ "EDP_Death4.DisplayName", "Death4" },
		{ "EDP_Death4.Name", "EDeathPose::EDP_Death4" },
		{ "EDP_Death5.DisplayName", "Death5" },
		{ "EDP_Death5.Name", "EDeathPose::EDP_Death5" },
		{ "EDP_Death6.DisplayName", "Death6" },
		{ "EDP_Death6.Name", "EDeathPose::EDP_Death6" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeathPose::EDP_Alive", (int64)EDeathPose::EDP_Alive },
		{ "EDeathPose::EDP_Death1", (int64)EDeathPose::EDP_Death1 },
		{ "EDeathPose::EDP_Death2", (int64)EDeathPose::EDP_Death2 },
		{ "EDeathPose::EDP_Death3", (int64)EDeathPose::EDP_Death3 },
		{ "EDeathPose::EDP_Death4", (int64)EDeathPose::EDP_Death4 },
		{ "EDeathPose::EDP_Death5", (int64)EDeathPose::EDP_Death5 },
		{ "EDeathPose::EDP_Death6", (int64)EDeathPose::EDP_Death6 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteelAndShadow,
	nullptr,
	"EDeathPose",
	"EDeathPose",
	Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteelAndShadow_EDeathPose()
{
	if (!Z_Registration_Info_UEnum_EDeathPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeathPose.InnerSingleton, Z_Construct_UEnum_SteelAndShadow_EDeathPose_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeathPose.InnerSingleton;
}
// End Enum EDeathPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_CharacterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 223662205U) },
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1603962153U) },
		{ EDeathPose_StaticEnum, TEXT("EDeathPose"), &Z_Registration_Info_UEnum_EDeathPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 559429626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_CharacterTypes_h_3991587490(TEXT("/Script/SteelAndShadow"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_CharacterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
