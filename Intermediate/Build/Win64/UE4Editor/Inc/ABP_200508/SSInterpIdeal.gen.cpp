// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSInterpIdeal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSInterpIdeal() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSInterpIdeal();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSSInterpIdeal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSInterpIdeal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSInterpIdeal, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSInterpIdeal"), sizeof(FSSInterpIdeal), Get_Z_Construct_UScriptStruct_FSSInterpIdeal_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSInterpIdeal>()
{
	return FSSInterpIdeal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSInterpIdeal(FSSInterpIdeal::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSInterpIdeal"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSInterpIdeal
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSInterpIdeal()
	{
		UScriptStruct::DeferCppStructOps<FSSInterpIdeal>(FName(TEXT("SSInterpIdeal")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSInterpIdeal;
	struct Z_Construct_UScriptStruct_FSSInterpIdeal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdealTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sweep_MetaData[];
#endif
		static void NewProp_Sweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sweep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSInterpIdeal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FSSInterpIdeal*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSInterpIdeal), &Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_TimeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_TimeCount = { "TimeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInterpIdeal, TimeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_TimeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_TimeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInterpIdeal, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_IdealTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_IdealTransform = { "IdealTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInterpIdeal, IdealTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_IdealTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_IdealTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_StartTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInterpIdeal, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_StartTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_StartTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInterpIdeal" },
		{ "ModuleRelativePath", "Public/SSInterpIdeal.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep_SetBit(void* Obj)
	{
		((FSSInterpIdeal*)Obj)->Sweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep = { "Sweep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSInterpIdeal), &Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_TimeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_IdealTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_StartTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::NewProp_Sweep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSInterpIdeal",
		sizeof(FSSInterpIdeal),
		alignof(FSSInterpIdeal),
		Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSInterpIdeal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSInterpIdeal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSInterpIdeal"), sizeof(FSSInterpIdeal), Get_Z_Construct_UScriptStruct_FSSInterpIdeal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSInterpIdeal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSInterpIdeal_Hash() { return 2078268269U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
