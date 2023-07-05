// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesDown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesDown() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDown();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDownPart();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesDown>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesDown cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesDown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesDown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesDown, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesDown"), sizeof(FELMovesDown), Get_Z_Construct_UScriptStruct_FELMovesDown_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesDown>()
{
	return FELMovesDown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesDown(FELMovesDown::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesDown"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesDown
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesDown()
	{
		UScriptStruct::DeferCppStructOps<FELMovesDown>(FName(TEXT("ELMovesDown")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesDown;
	struct Z_Construct_UScriptStruct_FELMovesDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceUp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_Foot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceUp_Foot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceUp_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceUp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceUp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceDown_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceDown_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceDown_Foot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceDown_Foot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceDown_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceDown_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_FaceDown_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down_FaceDown_LeftHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesDown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesDown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Head_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Head = { "Down_FaceUp_Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceUp_Head), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Foot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Foot = { "Down_FaceUp_Foot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceUp_Foot), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Foot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_RightHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_RightHand = { "Down_FaceUp_RightHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceUp_RightHand), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_LeftHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_LeftHand = { "Down_FaceUp_LeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceUp_LeftHand), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Head_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Head = { "Down_FaceDown_Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceDown_Head), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Foot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Foot = { "Down_FaceDown_Foot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceDown_Foot), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Foot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_RightHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_RightHand = { "Down_FaceDown_RightHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceDown_RightHand), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_LeftHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDown" },
		{ "ModuleRelativePath", "Public/ELMovesDown.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_LeftHand = { "Down_FaceDown_LeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDown, Down_FaceDown_LeftHand), Z_Construct_UScriptStruct_FELMovesDownPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_LeftHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_Foot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceUp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_Foot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDown_Statics::NewProp_Down_FaceDown_LeftHand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesDown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesDown",
		sizeof(FELMovesDown),
		alignof(FELMovesDown),
		Z_Construct_UScriptStruct_FELMovesDown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesDown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesDown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesDown"), sizeof(FELMovesDown), Get_Z_Construct_UScriptStruct_FELMovesDown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesDown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesDown_Hash() { return 180251243U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
