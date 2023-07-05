// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/IndexedColorList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedColorList() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FIndexedColorList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FIndexedColorList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedColorList, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("IndexedColorList"), sizeof(FIndexedColorList), Get_Z_Construct_UScriptStruct_FIndexedColorList_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FIndexedColorList>()
{
	return FIndexedColorList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedColorList(FIndexedColorList::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("IndexedColorList"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFIndexedColorList
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFIndexedColorList()
	{
		UScriptStruct::DeferCppStructOps<FIndexedColorList>(FName(TEXT("IndexedColorList")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFIndexedColorList;
	struct Z_Construct_UScriptStruct_FIndexedColorList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColorList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IndexedColorList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedColorList>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IndexedColorList" },
		{ "ModuleRelativePath", "Public/IndexedColorList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedColorList, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedColorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedColorList_Statics::NewProp_List,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedColorList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"IndexedColorList",
		sizeof(FIndexedColorList),
		alignof(FIndexedColorList),
		Z_Construct_UScriptStruct_FIndexedColorList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColorList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedColorList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedColorList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedColorList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedColorList"), sizeof(FIndexedColorList), Get_Z_Construct_UScriptStruct_FIndexedColorList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIndexedColorList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedColorList_Hash() { return 22606826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
