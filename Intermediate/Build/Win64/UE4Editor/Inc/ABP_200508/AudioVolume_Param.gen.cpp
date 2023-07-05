// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AudioVolume_Param.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVolume_Param() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolume_Param();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAudioVolume_Param>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAudioVolume_Param cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAudioVolume_Param::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAudioVolume_Param_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioVolume_Param, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AudioVolume_Param"), sizeof(FAudioVolume_Param), Get_Z_Construct_UScriptStruct_FAudioVolume_Param_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAudioVolume_Param>()
{
	return FAudioVolume_Param::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioVolume_Param(FAudioVolume_Param::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AudioVolume_Param"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAudioVolume_Param
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAudioVolume_Param()
	{
		UScriptStruct::DeferCppStructOps<FAudioVolume_Param>(FName(TEXT("AudioVolume_Param")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAudioVolume_Param;
	struct Z_Construct_UScriptStruct_FAudioVolume_Param_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMute_MetaData[];
#endif
		static void NewProp_IsMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioVolume_Param.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioVolume_Param>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioVolume_Param" },
		{ "ModuleRelativePath", "Public/AudioVolume_Param.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute_SetBit(void* Obj)
	{
		((FAudioVolume_Param*)Obj)->IsMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute = { "IsMute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioVolume_Param), &Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioVolume_Param" },
		{ "ModuleRelativePath", "Public/AudioVolume_Param.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioVolume_Param, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_IsMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::NewProp_Volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AudioVolume_Param",
		sizeof(FAudioVolume_Param),
		alignof(FAudioVolume_Param),
		Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioVolume_Param()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioVolume_Param_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioVolume_Param"), sizeof(FAudioVolume_Param), Get_Z_Construct_UScriptStruct_FAudioVolume_Param_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioVolume_Param_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioVolume_Param_Hash() { return 3605760499U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
