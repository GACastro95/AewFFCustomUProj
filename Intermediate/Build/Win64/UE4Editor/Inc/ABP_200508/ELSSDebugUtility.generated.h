// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESSDebugStringCategory : uint8;
struct FSSServerEndpoint;
struct FSSModeServerParam;
enum class ESSLocalDebugFlag : uint8;
enum class ESSGameStateDebugFlag : uint8;
enum class ESSPlayerDebugFlag : uint8;
struct FYGS2SSPlayerData;
enum class ESSDebugStreathCheck : uint8;
#ifdef ABP_200508_ELSSDebugUtility_generated_h
#error "ELSSDebugUtility.generated.h already included, missing '#pragma once' in ELSSDebugUtility.h"
#endif
#define ABP_200508_ELSSDebugUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySSDebugDisableWorldRendering); \
	DECLARE_FUNCTION(execClearSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execGetSSDebugAIEditWrestlerNum); \
	DECLARE_FUNCTION(execGetSSDebugAutoEquipWeapon); \
	DECLARE_FUNCTION(execGetSSDebugMatchMakeGroupId); \
	DECLARE_FUNCTION(execGetSSDebugMatchMakeGroupSinglePlayOffset); \
	DECLARE_FUNCTION(execGetSSDebugOverrideMasterDataVersion); \
	DECLARE_FUNCTION(execGetSSDebugOverrideServerEndpoint); \
	DECLARE_FUNCTION(execGetSSDebugOverrideServerParam); \
	DECLARE_FUNCTION(execGetSSDebugOverrideUserId); \
	DECLARE_FUNCTION(execGetSSDebugOverrideYGS2URLForDataLoading); \
	DECLARE_FUNCTION(execGetSSDebugPlayNumberOfClients); \
	DECLARE_FUNCTION(execGetSSDebugSinglePlayFixedSeconds); \
	DECLARE_FUNCTION(execHasSSLocalDebugFlag); \
	DECLARE_FUNCTION(execHasSSReservedGameStateDebugFlag); \
	DECLARE_FUNCTION(execHasSSReservedPlayerDebugFlag); \
	DECLARE_FUNCTION(execIsSSDebugAIOnlyMode); \
	DECLARE_FUNCTION(execIsSSDebugOverrideServerParam); \
	DECLARE_FUNCTION(execIsSSDebugPlayAutoAttack); \
	DECLARE_FUNCTION(execIsSSDebugPlayStartAssemble); \
	DECLARE_FUNCTION(execRefreshSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execRemoveAllSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execRemoveSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execSetSSDebugAutoEquipWeapon); \
	DECLARE_FUNCTION(execSetSSDebugInfo_AppliedPenalty); \
	DECLARE_FUNCTION(execSetSSDebugInfo_DebugStatus); \
	DECLARE_FUNCTION(execSetSSDebugInfo_Region); \
	DECLARE_FUNCTION(execSetSSDebugInfo_Version); \
	DECLARE_FUNCTION(execSetSSDebugLowQuarity); \
	DECLARE_FUNCTION(execSetSSDebugMatchMakeGroupId); \
	DECLARE_FUNCTION(execSetSSDebugOverrideUserId); \
	DECLARE_FUNCTION(execSetSSDebugSinglePlayFixedSeconds); \
	DECLARE_FUNCTION(execSetSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execSetSSLocalDebugFlag); \
	DECLARE_FUNCTION(execSetSSReservedGameStateDebugFlag); \
	DECLARE_FUNCTION(execSetSSReservedPlayerDebugFlag); \
	DECLARE_FUNCTION(execSetupSSDebugStreathCheckSettings); \
	DECLARE_FUNCTION(execSSDebugAutoPlay_PressMenuDecision); \
	DECLARE_FUNCTION(execSSDebugLog_LocalNetworkVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySSDebugDisableWorldRendering); \
	DECLARE_FUNCTION(execClearSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execGetSSDebugAIEditWrestlerNum); \
	DECLARE_FUNCTION(execGetSSDebugAutoEquipWeapon); \
	DECLARE_FUNCTION(execGetSSDebugMatchMakeGroupId); \
	DECLARE_FUNCTION(execGetSSDebugMatchMakeGroupSinglePlayOffset); \
	DECLARE_FUNCTION(execGetSSDebugOverrideMasterDataVersion); \
	DECLARE_FUNCTION(execGetSSDebugOverrideServerEndpoint); \
	DECLARE_FUNCTION(execGetSSDebugOverrideServerParam); \
	DECLARE_FUNCTION(execGetSSDebugOverrideUserId); \
	DECLARE_FUNCTION(execGetSSDebugOverrideYGS2URLForDataLoading); \
	DECLARE_FUNCTION(execGetSSDebugPlayNumberOfClients); \
	DECLARE_FUNCTION(execGetSSDebugSinglePlayFixedSeconds); \
	DECLARE_FUNCTION(execHasSSLocalDebugFlag); \
	DECLARE_FUNCTION(execHasSSReservedGameStateDebugFlag); \
	DECLARE_FUNCTION(execHasSSReservedPlayerDebugFlag); \
	DECLARE_FUNCTION(execIsSSDebugAIOnlyMode); \
	DECLARE_FUNCTION(execIsSSDebugOverrideServerParam); \
	DECLARE_FUNCTION(execIsSSDebugPlayAutoAttack); \
	DECLARE_FUNCTION(execIsSSDebugPlayStartAssemble); \
	DECLARE_FUNCTION(execRefreshSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execRemoveAllSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execRemoveSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execSetSSDebugAutoEquipWeapon); \
	DECLARE_FUNCTION(execSetSSDebugInfo_AppliedPenalty); \
	DECLARE_FUNCTION(execSetSSDebugInfo_DebugStatus); \
	DECLARE_FUNCTION(execSetSSDebugInfo_Region); \
	DECLARE_FUNCTION(execSetSSDebugInfo_Version); \
	DECLARE_FUNCTION(execSetSSDebugLowQuarity); \
	DECLARE_FUNCTION(execSetSSDebugMatchMakeGroupId); \
	DECLARE_FUNCTION(execSetSSDebugOverrideUserId); \
	DECLARE_FUNCTION(execSetSSDebugSinglePlayFixedSeconds); \
	DECLARE_FUNCTION(execSetSSDebugStringOnScreen); \
	DECLARE_FUNCTION(execSetSSLocalDebugFlag); \
	DECLARE_FUNCTION(execSetSSReservedGameStateDebugFlag); \
	DECLARE_FUNCTION(execSetSSReservedPlayerDebugFlag); \
	DECLARE_FUNCTION(execSetupSSDebugStreathCheckSettings); \
	DECLARE_FUNCTION(execSSDebugAutoPlay_PressMenuDecision); \
	DECLARE_FUNCTION(execSSDebugLog_LocalNetworkVersion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSDebugUtility(); \
	friend struct Z_Construct_UClass_UELSSDebugUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSDebugUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDebugUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELSSDebugUtility(); \
	friend struct Z_Construct_UClass_UELSSDebugUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSDebugUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDebugUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSDebugUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSDebugUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDebugUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDebugUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDebugUtility(UELSSDebugUtility&&); \
	NO_API UELSSDebugUtility(const UELSSDebugUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDebugUtility(UELSSDebugUtility&&); \
	NO_API UELSSDebugUtility(const UELSSDebugUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDebugUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDebugUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSDebugUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_16_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSDebugUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDebugUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
