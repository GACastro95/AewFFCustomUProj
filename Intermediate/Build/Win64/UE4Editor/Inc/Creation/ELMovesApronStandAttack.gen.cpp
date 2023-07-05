// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesApronStandAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesApronStandAttack() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronStandAttack();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesApronStandAttack>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesApronStandAttack cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesApronStandAttack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesApronStandAttack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesApronStandAttack, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesApronStandAttack"), sizeof(FELMovesApronStandAttack), Get_Z_Construct_UScriptStruct_FELMovesApronStandAttack_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesApronStandAttack>()
{
	return FELMovesApronStandAttack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesApronStandAttack(FELMovesApronStandAttack::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesApronStandAttack"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesApronStandAttack
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesApronStandAttack()
	{
		UScriptStruct::DeferCppStructOps<FELMovesApronStandAttack>(FName(TEXT("ELMovesApronStandAttack")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesApronStandAttack;
	struct Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_RunningPunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_RunningPunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_RunningKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_RunningKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_To_Apron_RunningGrapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ring_To_Apron_RunningGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutSide_To_Apron_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutSide_To_Apron_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutSide_To_Apron_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutSide_To_Apron_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutSide_To_Apron_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutSide_To_Apron_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Front_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Apron_To_Ring_Front_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Front_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Apron_To_Ring_Front_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Back_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Apron_To_Ring_Back_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apron_To_Ring_Back_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Apron_To_Ring_Back_Kick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesApronStandAttack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Punch = { "Ring_To_Apron_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Ring_To_Apron_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Kick = { "Ring_To_Apron_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Ring_To_Apron_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningPunch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningPunch = { "Ring_To_Apron_RunningPunch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Ring_To_Apron_RunningPunch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningPunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningPunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningKick = { "Ring_To_Apron_RunningKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Ring_To_Apron_RunningKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningGrapple = { "Ring_To_Apron_RunningGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Ring_To_Apron_RunningGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Punch = { "OutSide_To_Apron_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, OutSide_To_Apron_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Kick = { "OutSide_To_Apron_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, OutSide_To_Apron_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Grapple = { "OutSide_To_Apron_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, OutSide_To_Apron_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Punch = { "Apron_To_Ring_Front_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Apron_To_Ring_Front_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Kick = { "Apron_To_Ring_Front_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Apron_To_Ring_Front_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Punch = { "Apron_To_Ring_Back_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Apron_To_Ring_Back_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesApronStandAttack" },
		{ "ModuleRelativePath", "Public/ELMovesApronStandAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Kick = { "Apron_To_Ring_Back_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesApronStandAttack, Apron_To_Ring_Back_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Kick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningPunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Ring_To_Apron_RunningGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_OutSide_To_Apron_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Front_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::NewProp_Apron_To_Ring_Back_Kick,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesApronStandAttack",
		sizeof(FELMovesApronStandAttack),
		alignof(FELMovesApronStandAttack),
		Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesApronStandAttack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesApronStandAttack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesApronStandAttack"), sizeof(FELMovesApronStandAttack), Get_Z_Construct_UScriptStruct_FELMovesApronStandAttack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesApronStandAttack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesApronStandAttack_Hash() { return 108192303U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
