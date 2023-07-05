// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_TracePunch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_TracePunch() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TracePunch();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_TracePunch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TracePunch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_TracePunch, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_TracePunch"), sizeof(FMiniGame_TracePunch), Get_Z_Construct_UScriptStruct_FMiniGame_TracePunch_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_TracePunch>()
{
	return FMiniGame_TracePunch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_TracePunch(FMiniGame_TracePunch::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_TracePunch"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TracePunch
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TracePunch()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_TracePunch>(FName(TEXT("MiniGame_TracePunch")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TracePunch;
	struct Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyBox_MetaData[];
#endif
		static void NewProp_bIsDestroyBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_TracePunch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_TracePunch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_TracePunch" },
		{ "ModuleRelativePath", "Public/MiniGame_TracePunch.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox_SetBit(void* Obj)
	{
		((FMiniGame_TracePunch*)Obj)->bIsDestroyBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox = { "bIsDestroyBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_TracePunch), &Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::NewProp_bIsDestroyBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_TracePunch",
		sizeof(FMiniGame_TracePunch),
		alignof(FMiniGame_TracePunch),
		Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TracePunch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TracePunch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_TracePunch"), sizeof(FMiniGame_TracePunch), Get_Z_Construct_UScriptStruct_FMiniGame_TracePunch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_TracePunch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TracePunch_Hash() { return 1792676777U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
