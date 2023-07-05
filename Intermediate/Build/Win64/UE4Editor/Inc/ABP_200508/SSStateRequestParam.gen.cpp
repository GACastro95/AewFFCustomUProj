// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStateRequestParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStateRequestParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStateRequestParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSStateRequestParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStateRequestParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStateRequestParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStateRequestParam"), sizeof(FSSStateRequestParam), Get_Z_Construct_UScriptStruct_FSSStateRequestParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStateRequestParam>()
{
	return FSSStateRequestParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStateRequestParam(FSSStateRequestParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStateRequestParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStateRequestParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStateRequestParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStateRequestParam>(FName(TEXT("SSStateRequestParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStateRequestParam;
	struct Z_Construct_UScriptStruct_FSSStateRequestParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputFlg_MetaData[];
#endif
		static void NewProp_InputFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStateRequestParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateRequestParam" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateRequestParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateRequestParam" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateRequestParam, Trigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateRequestParam" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateRequestParam, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateRequestParam" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg_SetBit(void* Obj)
	{
		((FSSStateRequestParam*)Obj)->InputFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg = { "InputFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSStateRequestParam), &Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStateRequestParam" },
		{ "ModuleRelativePath", "Public/SSStateRequestParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputYaw = { "InputYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStateRequestParam, InputYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::NewProp_InputYaw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSStateRequestParam",
		sizeof(FSSStateRequestParam),
		alignof(FSSStateRequestParam),
		Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStateRequestParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStateRequestParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStateRequestParam"), sizeof(FSSStateRequestParam), Get_Z_Construct_UScriptStruct_FSSStateRequestParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStateRequestParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStateRequestParam_Hash() { return 3962285688U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
