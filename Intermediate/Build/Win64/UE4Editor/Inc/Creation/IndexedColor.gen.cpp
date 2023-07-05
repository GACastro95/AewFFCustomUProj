// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/IndexedColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedColor() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColor();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FIndexedColor>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIndexedColor cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FIndexedColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FIndexedColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedColor, Z_Construct_UPackage__Script_Creation(), TEXT("IndexedColor"), sizeof(FIndexedColor), Get_Z_Construct_UScriptStruct_FIndexedColor_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FIndexedColor>()
{
	return FIndexedColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedColor(FIndexedColor::StaticStruct, TEXT("/Script/Creation"), TEXT("IndexedColor"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFIndexedColor
{
	FScriptStruct_Creation_StaticRegisterNativesFIndexedColor()
	{
		UScriptStruct::DeferCppStructOps<FIndexedColor>(FName(TEXT("IndexedColor")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFIndexedColor;
	struct Z_Construct_UScriptStruct_FIndexedColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IndexedColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_ColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IndexedColor" },
		{ "ModuleRelativePath", "Public/IndexedColor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_ColorID = { "ColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedColor, ColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_ColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_ColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IndexedColor" },
		{ "ModuleRelativePath", "Public/IndexedColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_ColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedColor_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"IndexedColor",
		sizeof(FIndexedColor),
		alignof(FIndexedColor),
		Z_Construct_UScriptStruct_FIndexedColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedColor"), sizeof(FIndexedColor), Get_Z_Construct_UScriptStruct_FIndexedColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIndexedColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedColor_Hash() { return 2403326497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
