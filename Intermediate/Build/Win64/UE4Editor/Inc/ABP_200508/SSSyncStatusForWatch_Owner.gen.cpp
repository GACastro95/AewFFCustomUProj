// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSSyncStatusForWatch_Owner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSSyncStatusForWatch_Owner() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
// End Cross Module References
class UScriptStruct* FSSSyncStatusForWatch_Owner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSSyncStatusForWatch_Owner"), sizeof(FSSSyncStatusForWatch_Owner), Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSSyncStatusForWatch_Owner>()
{
	return FSSSyncStatusForWatch_Owner::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSSyncStatusForWatch_Owner(FSSSyncStatusForWatch_Owner::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSSyncStatusForWatch_Owner"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Owner
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Owner()
	{
		UScriptStruct::DeferCppStructOps<FSSSyncStatusForWatch_Owner>(FName(TEXT("SSSyncStatusForWatch_Owner")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSSyncStatusForWatch_Owner;
	struct Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSSyncStatusForWatch_Owner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSSyncStatusForWatch_Owner>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewProp_CameraDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSyncStatusForWatch_Owner" },
		{ "ModuleRelativePath", "Public/SSSyncStatusForWatch_Owner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewProp_CameraDirection = { "CameraDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSyncStatusForWatch_Owner, CameraDirection), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewProp_CameraDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewProp_CameraDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::NewProp_CameraDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSSyncStatusForWatch_Owner",
		sizeof(FSSSyncStatusForWatch_Owner),
		alignof(FSSSyncStatusForWatch_Owner),
		Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSSyncStatusForWatch_Owner"), sizeof(FSSSyncStatusForWatch_Owner), Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSSyncStatusForWatch_Owner_Hash() { return 4076502042U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
