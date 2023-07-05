// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ColorParameterList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorParameterList() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterList();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameter();
// End Cross Module References
class UScriptStruct* FColorParameterList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FColorParameterList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterList, Z_Construct_UPackage__Script_Creation(), TEXT("ColorParameterList"), sizeof(FColorParameterList), Get_Z_Construct_UScriptStruct_FColorParameterList_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FColorParameterList>()
{
	return FColorParameterList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorParameterList(FColorParameterList::StaticStruct, TEXT("/Script/Creation"), TEXT("ColorParameterList"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFColorParameterList
{
	FScriptStruct_Creation_StaticRegisterNativesFColorParameterList()
	{
		UScriptStruct::DeferCppStructOps<FColorParameterList>(FName(TEXT("ColorParameterList")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFColorParameterList;
	struct Z_Construct_UScriptStruct_FColorParameterList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ColorParameterList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorParameterList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameterList>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColorParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorParameterList" },
		{ "ModuleRelativePath", "Public/ColorParameterList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameterList, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorParameterList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterList_Statics::NewProp_List,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorParameterList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"ColorParameterList",
		sizeof(FColorParameterList),
		alignof(FColorParameterList),
		Z_Construct_UScriptStruct_FColorParameterList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameterList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorParameterList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorParameterList"), sizeof(FColorParameterList), Get_Z_Construct_UScriptStruct_FColorParameterList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorParameterList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorParameterList_Hash() { return 865957562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
