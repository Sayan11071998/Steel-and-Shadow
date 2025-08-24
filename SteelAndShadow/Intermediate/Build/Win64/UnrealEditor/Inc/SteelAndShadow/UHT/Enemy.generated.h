// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef STEELANDSHADOW_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define STEELANDSHADOW_Enemy_generated_h

#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPawnSeen);


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteelAndShadow"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&); \
	AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_9_PROLOG
#define FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEELANDSHADOW_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_Steel_and_Shadow_SteelAndShadow_Source_SteelAndShadow_Public_Enemy_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
