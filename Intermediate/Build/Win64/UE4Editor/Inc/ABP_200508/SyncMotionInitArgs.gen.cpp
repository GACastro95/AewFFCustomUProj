// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SyncMotionInitArgs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncMotionInitArgs() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSyncMotionInitArgs();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FSyncMotionInitArgs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSyncMotionInitArgs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSyncMotionInitArgs, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SyncMotionInitArgs"), sizeof(FSyncMotionInitArgs), Get_Z_Construct_UScriptStruct_FSyncMotionInitArgs_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSyncMotionInitArgs>()
{
	return FSyncMotionInitArgs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSyncMotionInitArgs(FSyncMotionInitArgs::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SyncMotionInitArgs"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSyncMotionInitArgs
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSyncMotionInitArgs()
	{
		UScriptStruct::DeferCppStructOps<FSyncMotionInitArgs>(FName(TEXT("SyncMotionInitArgs")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSyncMotionInitArgs;
	struct Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SyncMotionInitArgs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSyncMotionInitArgs>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Chara_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SyncMotionInitArgs" },
		{ "ModuleRelativePath", "Public/SyncMotionInitArgs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncMotionInitArgs, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Chara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Chara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Anim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SyncMotionInitArgs" },
		{ "ModuleRelativePath", "Public/SyncMotionInitArgs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSyncMotionInitArgs, Anim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Anim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::NewProp_Anim,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SyncMotionInitArgs",
		sizeof(FSyncMotionInitArgs),
		alignof(FSyncMotionInitArgs),
		Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSyncMotionInitArgs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSyncMotionInitArgs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SyncMotionInitArgs"), sizeof(FSyncMotionInitArgs), Get_Z_Construct_UScriptStruct_FSyncMotionInitArgs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSyncMotionInitArgs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSyncMotionInitArgs_Hash() { return 2927919134U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
