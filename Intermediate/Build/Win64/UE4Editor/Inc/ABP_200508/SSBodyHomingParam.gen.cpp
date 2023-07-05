// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSBodyHomingParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSBodyHomingParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSBodyHomingParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHomingMode();
// End Cross Module References
class UScriptStruct* FSSBodyHomingParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSBodyHomingParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSBodyHomingParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSBodyHomingParam"), sizeof(FSSBodyHomingParam), Get_Z_Construct_UScriptStruct_FSSBodyHomingParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSBodyHomingParam>()
{
	return FSSBodyHomingParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSBodyHomingParam(FSSBodyHomingParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSBodyHomingParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSBodyHomingParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSBodyHomingParam()
	{
		UScriptStruct::DeferCppStructOps<FSSBodyHomingParam>(FName(TEXT("SSBodyHomingParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSBodyHomingParam;
	struct Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalRotationKeepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalRotationKeepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithCameraHoming_MetaData[];
#endif
		static void NewProp_WithCameraHoming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithCameraHoming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSBodyHomingParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSBodyHomingParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSBodyHomingParam" },
		{ "ModuleRelativePath", "Public/SSBodyHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSBodyHomingParam, Mode), Z_Construct_UEnum_ABP_200508_ESSHomingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSBodyHomingParam" },
		{ "ModuleRelativePath", "Public/SSBodyHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSBodyHomingParam, RotateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_InternalRotationKeepTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSBodyHomingParam" },
		{ "ModuleRelativePath", "Public/SSBodyHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_InternalRotationKeepTime = { "InternalRotationKeepTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSBodyHomingParam, InternalRotationKeepTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_InternalRotationKeepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_InternalRotationKeepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSBodyHomingParam" },
		{ "ModuleRelativePath", "Public/SSBodyHomingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming_SetBit(void* Obj)
	{
		((FSSBodyHomingParam*)Obj)->WithCameraHoming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming = { "WithCameraHoming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSBodyHomingParam), &Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_RotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_InternalRotationKeepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::NewProp_WithCameraHoming,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSBodyHomingParam",
		sizeof(FSSBodyHomingParam),
		alignof(FSSBodyHomingParam),
		Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSBodyHomingParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSBodyHomingParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSBodyHomingParam"), sizeof(FSSBodyHomingParam), Get_Z_Construct_UScriptStruct_FSSBodyHomingParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSBodyHomingParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSBodyHomingParam_Hash() { return 1017345334U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
