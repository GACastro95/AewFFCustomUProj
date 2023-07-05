// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMenuFinisherParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMenuFinisherParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMenuFinisherParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMenuFinisherParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMenuFinisherParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMenuFinisherParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMenuFinisherParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMenuFinisherParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMenuFinisherParam"), sizeof(FSSMenuFinisherParam), Get_Z_Construct_UScriptStruct_FSSMenuFinisherParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMenuFinisherParam>()
{
	return FSSMenuFinisherParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMenuFinisherParam(FSSMenuFinisherParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMenuFinisherParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMenuFinisherParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMenuFinisherParam()
	{
		UScriptStruct::DeferCppStructOps<FSSMenuFinisherParam>(FName(TEXT("SSMenuFinisherParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMenuFinisherParam;
	struct Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiniserMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FiniserMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opened_MetaData[];
#endif
		static void NewProp_Opened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Opened;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMenuFinisherParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMenuFinisherParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_FiniserMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMenuFinisherParam" },
		{ "ModuleRelativePath", "Public/SSMenuFinisherParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_FiniserMoveId = { "FiniserMoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMenuFinisherParam, FiniserMoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_FiniserMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_FiniserMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMenuFinisherParam" },
		{ "ModuleRelativePath", "Public/SSMenuFinisherParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened_SetBit(void* Obj)
	{
		((FSSMenuFinisherParam*)Obj)->Opened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened = { "Opened", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMenuFinisherParam), &Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_FiniserMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::NewProp_Opened,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMenuFinisherParam",
		sizeof(FSSMenuFinisherParam),
		alignof(FSSMenuFinisherParam),
		Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMenuFinisherParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMenuFinisherParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMenuFinisherParam"), sizeof(FSSMenuFinisherParam), Get_Z_Construct_UScriptStruct_FSSMenuFinisherParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMenuFinisherParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMenuFinisherParam_Hash() { return 915302822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
