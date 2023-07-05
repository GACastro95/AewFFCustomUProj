// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerVisualModifyParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerVisualModifyParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWrestlerVisualModifyParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWrestlerVisualModifyParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWrestlerVisualModifyParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerVisualModifyParam"), sizeof(FSSWrestlerVisualModifyParam), Get_Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerVisualModifyParam>()
{
	return FSSWrestlerVisualModifyParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerVisualModifyParam(FSSWrestlerVisualModifyParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerVisualModifyParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerVisualModifyParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerVisualModifyParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerVisualModifyParam>(FName(TEXT("SSWrestlerVisualModifyParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerVisualModifyParam;
	struct Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRemove_MetaData[];
#endif
		static void NewProp_ForceRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableShieldVisible_MetaData[];
#endif
		static void NewProp_DisableShieldVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableShieldVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableStick_MetaData[];
#endif
		static void NewProp_DisableStick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableStick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerVisualModifyParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerVisualModifyParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerVisualModifyParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_AssetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerVisualModifyParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerVisualModifyParam, AssetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerVisualModifyParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove_SetBit(void* Obj)
	{
		((FSSWrestlerVisualModifyParam*)Obj)->ForceRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove = { "ForceRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSWrestlerVisualModifyParam), &Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerVisualModifyParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible_SetBit(void* Obj)
	{
		((FSSWrestlerVisualModifyParam*)Obj)->DisableShieldVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible = { "DisableShieldVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSWrestlerVisualModifyParam), &Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerVisualModifyParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerVisualModifyParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick_SetBit(void* Obj)
	{
		((FSSWrestlerVisualModifyParam*)Obj)->DisableStick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick = { "DisableStick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSWrestlerVisualModifyParam), &Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_ForceRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableShieldVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::NewProp_DisableStick,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWrestlerVisualModifyParam",
		sizeof(FSSWrestlerVisualModifyParam),
		alignof(FSSWrestlerVisualModifyParam),
		Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerVisualModifyParam"), sizeof(FSSWrestlerVisualModifyParam), Get_Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerVisualModifyParam_Hash() { return 675723498U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
