// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TemplateScoutListAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateScoutListAsset() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutListAsset_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutListAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateScoutParam();
// End Cross Module References
	DEFINE_FUNCTION(UTemplateScoutListAsset::execGetItem)
	{
		P_GET_STRUCT_REF(FTemplateScoutParam,Z_Param_Out_Param);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItem(Z_Param_Out_Param,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTemplateScoutListAsset::execGetItems)
	{
		P_GET_TARRAY_REF(FTemplateScoutParam,Z_Param_Out_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItems(Z_Param_Out_List);
		P_NATIVE_END;
	}
	void UTemplateScoutListAsset::StaticRegisterNativesUTemplateScoutListAsset()
	{
		UClass* Class = UTemplateScoutListAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItem", &UTemplateScoutListAsset::execGetItem },
			{ "GetItems", &UTemplateScoutListAsset::execGetItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics
	{
		struct TemplateScoutListAsset_eventGetItem_Parms
		{
			FTemplateScoutParam Param;
			int32 Index;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutListAsset_eventGetItem_Parms, Param), Z_Construct_UScriptStruct_FTemplateScoutParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutListAsset_eventGetItem_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutListAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutListAsset, nullptr, "GetItem", nullptr, nullptr, sizeof(TemplateScoutListAsset_eventGetItem_Parms), Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutListAsset_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutListAsset_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics
	{
		struct TemplateScoutListAsset_eventGetItems_Parms
		{
			TArray<FTemplateScoutParam> List;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateScoutParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateScoutListAsset_eventGetItems_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateScoutListAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateScoutListAsset, nullptr, "GetItems", nullptr, nullptr, sizeof(TemplateScoutListAsset_eventGetItems_Parms), Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateScoutListAsset_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateScoutListAsset_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTemplateScoutListAsset_NoRegister()
	{
		return UTemplateScoutListAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateScoutListAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateScoutListAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateScoutListAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateScoutListAsset_GetItem, "GetItem" }, // 3978907537
		{ &Z_Construct_UFunction_UTemplateScoutListAsset_GetItems, "GetItems" }, // 2669282179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutListAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TemplateScoutListAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TemplateScoutListAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateScoutParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TemplateScoutListAsset" },
		{ "ModuleRelativePath", "Public/TemplateScoutListAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateScoutListAsset, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateScoutListAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateScoutListAsset_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateScoutListAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateScoutListAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateScoutListAsset_Statics::ClassParams = {
		&UTemplateScoutListAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTemplateScoutListAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutListAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateScoutListAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateScoutListAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateScoutListAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateScoutListAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateScoutListAsset, 2276991528);
	template<> ABP_200508_API UClass* StaticClass<UTemplateScoutListAsset>()
	{
		return UTemplateScoutListAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateScoutListAsset(Z_Construct_UClass_UTemplateScoutListAsset, &UTemplateScoutListAsset::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UTemplateScoutListAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateScoutListAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
