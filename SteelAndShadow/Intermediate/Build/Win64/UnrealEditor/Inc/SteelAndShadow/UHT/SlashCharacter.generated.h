// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/SlashCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEELANDSHADOW_SlashCharacter_generated_h
#error "SlashCharacter.generated.h already included, missing '#pragma once' in SlashCharacter.h"
#endif
#define STEELANDSHADOW_SlashCharacter_generated_h

#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execAttachWeaponToBack); \
	DECLARE_FUNCTION(execAttachWeaponToHand);


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlashCharacter(); \
	friend struct Z_Construct_UClass_ASlashCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlashCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteelAndShadow"), NO_API) \
	DECLARE_SERIALIZER(ASlashCharacter)


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASlashCharacter(ASlashCharacter&&); \
	ASlashCharacter(const ASlashCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlashCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlashCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlashCharacter) \
	NO_API virtual ~ASlashCharacter();


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_8_PROLOG
#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEELANDSHADOW_API UClass* StaticClass<class ASlashCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Characters_SlashCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
