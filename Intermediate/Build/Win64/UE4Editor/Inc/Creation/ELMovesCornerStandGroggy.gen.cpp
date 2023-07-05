// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesCornerStandGroggy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesCornerStandGroggy() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerStandGroggy();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesCornerStandGroggy>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesCornerStandGroggy cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesCornerStandGroggy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesCornerStandGroggy"), sizeof(FELMovesCornerStandGroggy), Get_Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesCornerStandGroggy>()
{
	return FELMovesCornerStandGroggy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesCornerStandGroggy(FELMovesCornerStandGroggy::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesCornerStandGroggy"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesCornerStandGroggy
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesCornerStandGroggy()
	{
		UScriptStruct::DeferCppStructOps<FELMovesCornerStandGroggy>(FName(TEXT("ELMovesCornerStandGroggy")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesCornerStandGroggy;
	struct Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_RunningPunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_RunningPunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_RunningKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_RunningKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_RunningGrapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Front_RunningGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_RunningPunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_RunningPunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_RunningKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_RunningKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_RunningGrapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Back_RunningGrapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesCornerStandGroggy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Punch = { "Front_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Front_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Kick = { "Front_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Front_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningPunch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningPunch = { "Front_RunningPunch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Front_RunningPunch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningPunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningPunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningKick = { "Front_RunningKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Front_RunningKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningGrapple = { "Front_RunningGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Front_RunningGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Punch = { "Back_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Back_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Kick = { "Back_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Back_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningPunch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningPunch = { "Back_RunningPunch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Back_RunningPunch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningPunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningPunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningKick = { "Back_RunningKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Back_RunningKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerStandGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesCornerStandGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningGrapple = { "Back_RunningGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerStandGroggy, Back_RunningGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningGrapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningPunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Front_RunningGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningPunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::NewProp_Back_RunningGrapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesCornerStandGroggy",
		sizeof(FELMovesCornerStandGroggy),
		alignof(FELMovesCornerStandGroggy),
		Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerStandGroggy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesCornerStandGroggy"), sizeof(FELMovesCornerStandGroggy), Get_Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerStandGroggy_Hash() { return 3015770524U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
