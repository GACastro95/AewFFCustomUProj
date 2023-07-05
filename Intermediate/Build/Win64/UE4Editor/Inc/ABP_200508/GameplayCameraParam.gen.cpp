// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameplayCameraParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCameraParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCameraParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayCameraParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGameplayCameraParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FGameplayCameraParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameplayCameraParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCameraParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameplayCameraParam"), sizeof(FGameplayCameraParam), Get_Z_Construct_UScriptStruct_FGameplayCameraParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameplayCameraParam>()
{
	return FGameplayCameraParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayCameraParam(FGameplayCameraParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameplayCameraParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameplayCameraParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameplayCameraParam()
	{
		UScriptStruct::DeferCppStructOps<FGameplayCameraParam>(FName(TEXT("GameplayCameraParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameplayCameraParam;
	struct Z_Construct_UScriptStruct_FGameplayCameraParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetZ_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetZ_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetZ_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOffsetZ_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMin_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMax_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_Arena_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMin_Arena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_Arena_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMax_Arena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Location_ForRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Location_ForRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Rotation_ForRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Rotation_ForRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Rotation_ForCameraChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Rotation_ForCameraChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_Location_ForCameraChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed_Location_ForCameraChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRate_U_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationRate_U;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRate_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationRate_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRate_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationRate_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRate_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationRate_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLocationBufferMinRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateLocationBufferMinRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateLocationBufferMaxRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateLocationBufferMaxRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationUpdateMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationUpdateMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseForCameraChangeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UseForCameraChangeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCameraParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Min = { "CameraOffsetZ_Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, CameraOffsetZ_Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Max = { "CameraOffsetZ_Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, CameraOffsetZ_Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Ring = { "RadiusMin_Ring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, RadiusMin_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Ring = { "RadiusMax_Ring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, RadiusMax_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Arena_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Arena = { "RadiusMin_Arena", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, RadiusMin_Arena), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Arena_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Arena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Arena_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Arena = { "RadiusMax_Arena", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, RadiusMax_Arena), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Arena_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Arena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location = { "InterpSpeed_Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation = { "InterpSpeed_Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForRun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForRun = { "InterpSpeed_Location_ForRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Location_ForRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForRun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForRun = { "InterpSpeed_Rotation_ForRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Rotation_ForRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForCameraChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForCameraChange = { "InterpSpeed_Rotation_ForCameraChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Rotation_ForCameraChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForCameraChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForCameraChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForCameraChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForCameraChange = { "InterpSpeed_Location_ForCameraChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, InterpSpeed_Location_ForCameraChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForCameraChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForCameraChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Min = { "Pitch_Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, Pitch_Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Max = { "Pitch_Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, Pitch_Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_U_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_U = { "LocationRate_U", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, LocationRate_U), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_U_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_D = { "LocationRate_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, LocationRate_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_X = { "LocationRate_X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, LocationRate_X), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_Y = { "LocationRate_Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, LocationRate_Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMinRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMinRate = { "UpdateLocationBufferMinRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, UpdateLocationBufferMinRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMinRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMinRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMaxRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMaxRate = { "UpdateLocationBufferMaxRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, UpdateLocationBufferMaxRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMaxRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMaxRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetLocationUpdateMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetLocationUpdateMargin = { "TargetLocationUpdateMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, TargetLocationUpdateMargin), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetLocationUpdateMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetLocationUpdateMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UseForCameraChangeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayCameraParam" },
		{ "ModuleRelativePath", "Public/GameplayCameraParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UseForCameraChangeDuration = { "UseForCameraChangeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCameraParam, UseForCameraChangeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UseForCameraChangeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UseForCameraChangeDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_CameraOffsetZ_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMin_Arena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_RadiusMax_Arena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Rotation_ForCameraChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_InterpSpeed_Location_ForCameraChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_Pitch_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_LocationRate_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMinRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UpdateLocationBufferMaxRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_TargetLocationUpdateMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::NewProp_UseForCameraChangeDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameplayCameraParam",
		sizeof(FGameplayCameraParam),
		alignof(FGameplayCameraParam),
		Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCameraParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayCameraParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayCameraParam"), sizeof(FGameplayCameraParam), Get_Z_Construct_UScriptStruct_FGameplayCameraParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayCameraParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayCameraParam_Hash() { return 2335006511U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
