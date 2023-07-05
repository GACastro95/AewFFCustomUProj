// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELWrestlerSelectParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSelectParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSelectParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
// End Cross Module References
class UScriptStruct* FELWrestlerSelectParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSelectParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerSelectParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELWrestlerSelectParam"), sizeof(FELWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FELWrestlerSelectParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELWrestlerSelectParam>()
{
	return FELWrestlerSelectParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerSelectParam(FELWrestlerSelectParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELWrestlerSelectParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELWrestlerSelectParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELWrestlerSelectParam()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerSelectParam>(FName(TEXT("ELWrestlerSelectParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELWrestlerSelectParam;
	struct Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachBeltForEntranceScene_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachBeltForEntranceScene_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBeltForEntranceScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachBeltForEntranceScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MomentumHUDSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MomentumHUDSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FanReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsKeyboardManipulate_MetaData[];
#endif
		static void NewProp_IsKeyboardManipulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsKeyboardManipulate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerSelectParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_Inner = { "AttachBeltForEntranceScene", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene = { "AttachBeltForEntranceScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSelectParam, AttachBeltForEntranceScene), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_MomentumHUDSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_MomentumHUDSlot = { "MomentumHUDSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSelectParam, MomentumHUDSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_MomentumHUDSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_MomentumHUDSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction = { "FanReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSelectParam, FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate_SetBit(void* Obj)
	{
		((FELWrestlerSelectParam*)Obj)->IsKeyboardManipulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate = { "IsKeyboardManipulate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerSelectParam), &Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_AttachBeltForEntranceScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_MomentumHUDSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_FanReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::NewProp_IsKeyboardManipulate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELWrestlerSelectParam",
		sizeof(FELWrestlerSelectParam),
		alignof(FELWrestlerSelectParam),
		Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSelectParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSelectParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerSelectParam"), sizeof(FELWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FELWrestlerSelectParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerSelectParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSelectParam_Hash() { return 425559318U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
