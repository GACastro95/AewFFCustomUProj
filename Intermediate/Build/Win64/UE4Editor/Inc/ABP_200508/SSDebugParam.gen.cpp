// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraParamType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDebugParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDebugParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDebugParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugParam"), sizeof(FSSDebugParam), Get_Z_Construct_UScriptStruct_FSSDebugParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugParam>()
{
	return FSSDebugParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugParam(FSSDebugParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugParam()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugParam>(FName(TEXT("SSDebugParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugParam;
	struct Z_Construct_UScriptStruct_FSSDebugParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPlayerStatus_MetaData[];
#endif
		static void NewProp_ShowPlayerStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowPlayerStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAttackCapsule_MetaData[];
#endif
		static void NewProp_ShowAttackCapsule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowAttackCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMoveCorrection_MetaData[];
#endif
		static void NewProp_ShowMoveCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMoveCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAimOffsetStatus_MetaData[];
#endif
		static void NewProp_ShowAimOffsetStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowAimOffsetStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowVehicleStatus_MetaData[];
#endif
		static void NewProp_ShowVehicleStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowVehicleStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowGaugeValue_MetaData[];
#endif
		static void NewProp_ShowGaugeValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowGaugeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMapAreaId_MetaData[];
#endif
		static void NewProp_ShowMapAreaId_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMapAreaId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDamage_MetaData[];
#endif
		static void NewProp_ShowDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDamageReason_MetaData[];
#endif
		static void NewProp_ShowDamageReason_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDamageReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAttention_MetaData[];
#endif
		static void NewProp_ShowAttention_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowAttention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAttentionStatus_MetaData[];
#endif
		static void NewProp_ShowAttentionStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowAttentionStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowServerFPS_MetaData[];
#endif
		static void NewProp_ShowServerFPS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowServerFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowRoundInfo_MetaData[];
#endif
		static void NewProp_ShowRoundInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowRoundInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraParamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraParamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCameraAction_MetaData[];
#endif
		static void NewProp_DisableCameraAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCameraAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeStormCourse_MetaData[];
#endif
		static void NewProp_VisualizeStormCourse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeStormCourse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowPlayerStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus = { "ShowPlayerStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowAttackCapsule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule = { "ShowAttackCapsule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowMoveCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection = { "ShowMoveCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowAimOffsetStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus = { "ShowAimOffsetStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowVehicleStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus = { "ShowVehicleStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowGaugeValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue = { "ShowGaugeValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowMapAreaId = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId = { "ShowMapAreaId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage = { "ShowDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowDamageReason = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason = { "ShowDamageReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowAttention = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention = { "ShowAttention", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowAttentionStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus = { "ShowAttentionStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowServerFPS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS = { "ShowServerFPS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->ShowRoundInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo = { "ShowRoundInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType = { "CameraParamType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugParam, CameraParamType), Z_Construct_UEnum_ABP_200508_ESSCameraParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->DisableCameraAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction = { "DisableCameraAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugParam" },
		{ "ModuleRelativePath", "Public/SSDebugParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse_SetBit(void* Obj)
	{
		((FSSDebugParam*)Obj)->VisualizeStormCourse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse = { "VisualizeStormCourse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugParam), &Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowPlayerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttackCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMoveCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAimOffsetStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowVehicleStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowGaugeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowMapAreaId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowDamageReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowAttentionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowServerFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_ShowRoundInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_CameraParamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_DisableCameraAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugParam_Statics::NewProp_VisualizeStormCourse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDebugParam",
		sizeof(FSSDebugParam),
		alignof(FSSDebugParam),
		Z_Construct_UScriptStruct_FSSDebugParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugParam"), sizeof(FSSDebugParam), Get_Z_Construct_UScriptStruct_FSSDebugParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugParam_Hash() { return 720374908U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
