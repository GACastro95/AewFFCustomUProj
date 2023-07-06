// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionPlayerStateDataBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionPlayerStateDataBP() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPlayerStateDataBP();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESessionPlayerStateType();
// End Cross Module References
class UScriptStruct* FSessionPlayerStateDataBP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SessionPlayerStateDataBP"), sizeof(FSessionPlayerStateDataBP), Get_Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSessionPlayerStateDataBP>()
{
	return FSessionPlayerStateDataBP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionPlayerStateDataBP(FSessionPlayerStateDataBP::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SessionPlayerStateDataBP"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSessionPlayerStateDataBP
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSessionPlayerStateDataBP()
	{
		UScriptStruct::DeferCppStructOps<FSessionPlayerStateDataBP>(FName(TEXT("SessionPlayerStateDataBP")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSessionPlayerStateDataBP;
	struct Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateArray_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SessionPlayerStateDataBP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionPlayerStateDataBP>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionPlayerStateDataBP" },
		{ "ModuleRelativePath", "Public/SessionPlayerStateDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray = { "StateArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StateArray, FSessionPlayerStateDataBP), STRUCT_OFFSET(FSessionPlayerStateDataBP, StateArray), Z_Construct_UEnum_ABP_200508_ESessionPlayerStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::NewProp_StateArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SessionPlayerStateDataBP",
		sizeof(FSessionPlayerStateDataBP),
		alignof(FSessionPlayerStateDataBP),
		Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionPlayerStateDataBP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionPlayerStateDataBP"), sizeof(FSessionPlayerStateDataBP), Get_Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionPlayerStateDataBP_Hash() { return 743753773U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif