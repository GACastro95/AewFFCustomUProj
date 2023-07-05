// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FMovesTestMenuStructDefine;
struct FMovesTestMenuStructDefine;
class UDataTable;
struct FELMoves_Finisher_Part;
struct FMovesSituation;
struct FELMoves_Finisher;
struct FWrestlingSkillParam;
struct FELMoves;
enum class EStickinputDir : uint8;
enum class EEnvironmentLeanAgainst : uint8;
enum class EChainWrestlingAttackType : uint8;
enum class EChainWrestlingPoseType : uint8;
enum class ESpecialMovesType : uint8;
enum class EEnvironmentGroggy : uint8;
enum class EDownDirType : uint8;
enum class ERecoilAttackType : uint8;
enum class ERopeGroggy : uint8;
enum class EWhipState : uint8;
enum class ETwoPlatoonsStuation : uint8;
struct FELMovesSituation_SlotDetail;
class AActor;
#ifdef ABP_200508_FELMovesFunction_generated_h
#error "FELMovesFunction.generated.h already included, missing '#pragma once' in FELMovesFunction.h"
#endif
#define ABP_200508_FELMovesFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFormatCurrentPathName); \
	DECLARE_FUNCTION(execGetActionSkillNo); \
	DECLARE_FUNCTION(execGetFinisher_SettingData); \
	DECLARE_FUNCTION(execGetFinisherMatchMenuData); \
	DECLARE_FUNCTION(execGetMoves_CornerGroggyStrike); \
	DECLARE_FUNCTION(execGetMovesChildrenMenuList); \
	DECLARE_FUNCTION(execGetMovesCurrentPathName); \
	DECLARE_FUNCTION(execGetMovesMenuMap); \
	DECLARE_FUNCTION(execGetMovesParentMenuName); \
	DECLARE_FUNCTION(execGetMovesTableBarricadeLeanAgainst); \
	DECLARE_FUNCTION(execGetMovesTableChainWrestling); \
	DECLARE_FUNCTION(execGetMovesTableValueApronSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueApronStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueApronToApron); \
	DECLARE_FUNCTION(execGetMovesTableValueChainGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueChainStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueCornerSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueDiving); \
	DECLARE_FUNCTION(execGetMovesTableValueDownGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueDownRunningStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueDownSpecial); \
	DECLARE_FUNCTION(execGetMovesTableValueDownStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueKickCatchThrow); \
	DECLARE_FUNCTION(execGetMovesTableValueRecoilAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueRingSideToRing); \
	DECLARE_FUNCTION(execGetMovesTableValueRiseUpStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueRopeGroggyStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueRopeSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueRunningAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueRunningCounter); \
	DECLARE_FUNCTION(execGetMovesTableValueSitDownAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueSpecialGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueSpecialStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueStandStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueTwoPlatoons); \
	DECLARE_FUNCTION(execGetMovesTableValueWhipAttack); \
	DECLARE_FUNCTION(execGetMovesTopMenuList); \
	DECLARE_FUNCTION(execGetSlotDetalMatchData); \
	DECLARE_FUNCTION(execMakeUniqueIndexELMoves); \
	DECLARE_FUNCTION(execSetSceneCaptureOnly);


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFormatCurrentPathName); \
	DECLARE_FUNCTION(execGetActionSkillNo); \
	DECLARE_FUNCTION(execGetFinisher_SettingData); \
	DECLARE_FUNCTION(execGetFinisherMatchMenuData); \
	DECLARE_FUNCTION(execGetMoves_CornerGroggyStrike); \
	DECLARE_FUNCTION(execGetMovesChildrenMenuList); \
	DECLARE_FUNCTION(execGetMovesCurrentPathName); \
	DECLARE_FUNCTION(execGetMovesMenuMap); \
	DECLARE_FUNCTION(execGetMovesParentMenuName); \
	DECLARE_FUNCTION(execGetMovesTableBarricadeLeanAgainst); \
	DECLARE_FUNCTION(execGetMovesTableChainWrestling); \
	DECLARE_FUNCTION(execGetMovesTableValueApronSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueApronStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueApronToApron); \
	DECLARE_FUNCTION(execGetMovesTableValueChainGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueChainStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueCornerSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueDiving); \
	DECLARE_FUNCTION(execGetMovesTableValueDownGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueDownRunningStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueDownSpecial); \
	DECLARE_FUNCTION(execGetMovesTableValueDownStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueKickCatchThrow); \
	DECLARE_FUNCTION(execGetMovesTableValueRecoilAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueRingSideToRing); \
	DECLARE_FUNCTION(execGetMovesTableValueRiseUpStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueRopeGroggyStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueRopeSpringboard); \
	DECLARE_FUNCTION(execGetMovesTableValueRunningAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueRunningCounter); \
	DECLARE_FUNCTION(execGetMovesTableValueSitDownAttack); \
	DECLARE_FUNCTION(execGetMovesTableValueSpecialGrapple); \
	DECLARE_FUNCTION(execGetMovesTableValueSpecialStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueStandStrike); \
	DECLARE_FUNCTION(execGetMovesTableValueTwoPlatoons); \
	DECLARE_FUNCTION(execGetMovesTableValueWhipAttack); \
	DECLARE_FUNCTION(execGetMovesTopMenuList); \
	DECLARE_FUNCTION(execGetSlotDetalMatchData); \
	DECLARE_FUNCTION(execMakeUniqueIndexELMoves); \
	DECLARE_FUNCTION(execSetSceneCaptureOnly);


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFELMovesFunction(); \
	friend struct Z_Construct_UClass_UFELMovesFunction_Statics; \
public: \
	DECLARE_CLASS(UFELMovesFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UFELMovesFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFELMovesFunction(); \
	friend struct Z_Construct_UClass_UFELMovesFunction_Statics; \
public: \
	DECLARE_CLASS(UFELMovesFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UFELMovesFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFELMovesFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFELMovesFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFELMovesFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFELMovesFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFELMovesFunction(UFELMovesFunction&&); \
	NO_API UFELMovesFunction(const UFELMovesFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFELMovesFunction(UFELMovesFunction&&); \
	NO_API UFELMovesFunction(const UFELMovesFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFELMovesFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFELMovesFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFELMovesFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_27_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UFELMovesFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_FELMovesFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
