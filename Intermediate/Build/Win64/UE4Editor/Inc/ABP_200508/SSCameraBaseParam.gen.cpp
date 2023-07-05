// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraBaseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraBaseParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraBaseParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraBaseParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraBaseParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraBaseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraBaseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraBaseParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraBaseParam"), sizeof(FSSCameraBaseParam), Get_Z_Construct_UScriptStruct_FSSCameraBaseParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraBaseParam>()
{
	return FSSCameraBaseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraBaseParam(FSSCameraBaseParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraBaseParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraBaseParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraBaseParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraBaseParam>(FName(TEXT("SSCameraBaseParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraBaseParam;
	struct Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_YawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotate_YawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_PitchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotate_PitchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_PitchLimitMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotate_PitchLimitMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_PitchLimitMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotate_PitchLimitMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPitch_MinAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPitch_MinAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLengthOffsetByPitch_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLengthOffsetByPitch_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreJumpMove_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreJumpMove_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreJumpMove_InterpDec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IgnoreJumpMove_InterpDec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetCameraDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetCameraDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableActionCamera_MetaData[];
#endif
		static void NewProp_DisableActionCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableActionCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshParamOnEveryTick_MetaData[];
#endif
		static void NewProp_RefreshParamOnEveryTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RefreshParamOnEveryTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraBaseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_BasePitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_BasePitch = { "BasePitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, BasePitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_BasePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_BasePitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetX = { "CameraOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, CameraOffsetX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetY = { "CameraOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, CameraOffsetY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetZ = { "CameraOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, CameraOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_YawSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_YawSpeed = { "Rotate_YawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, Rotate_YawSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_YawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_YawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchSpeed = { "Rotate_PitchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, Rotate_PitchSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMin = { "Rotate_PitchLimitMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, Rotate_PitchLimitMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMax = { "Rotate_PitchLimitMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, Rotate_PitchLimitMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch = { "TargetLengthOffsetByPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, TargetLengthOffsetByPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MinAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MinAngle = { "TargetLengthOffsetByPitch_MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, TargetLengthOffsetByPitch_MinAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MinAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MinAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MaxAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MaxAngle = { "TargetLengthOffsetByPitch_MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, TargetLengthOffsetByPitch_MaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_MaxHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_MaxHeight = { "IgnoreJumpMove_MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, IgnoreJumpMove_MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_InterpDec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_InterpDec = { "IgnoreJumpMove_InterpDec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, IgnoreJumpMove_InterpDec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_InterpDec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_InterpDec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_ResetCameraDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_ResetCameraDuration = { "ResetCameraDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraBaseParam, ResetCameraDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_ResetCameraDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_ResetCameraDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera_SetBit(void* Obj)
	{
		((FSSCameraBaseParam*)Obj)->DisableActionCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera = { "DisableActionCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraBaseParam), &Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraBaseParam" },
		{ "ModuleRelativePath", "Public/SSCameraBaseParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick_SetBit(void* Obj)
	{
		((FSSCameraBaseParam*)Obj)->RefreshParamOnEveryTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick = { "RefreshParamOnEveryTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraBaseParam), &Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_BasePitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_CameraOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_YawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_Rotate_PitchLimitMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MinAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_TargetLengthOffsetByPitch_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_IgnoreJumpMove_InterpDec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_ResetCameraDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_DisableActionCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::NewProp_RefreshParamOnEveryTick,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraBaseParam",
		sizeof(FSSCameraBaseParam),
		alignof(FSSCameraBaseParam),
		Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraBaseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraBaseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraBaseParam"), sizeof(FSSCameraBaseParam), Get_Z_Construct_UScriptStruct_FSSCameraBaseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraBaseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraBaseParam_Hash() { return 3583921412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
