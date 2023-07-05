// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomProfileData() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataSort)
	{
		P_GET_TARRAY(FAtomProfileItem,Z_Param_original_item);
		P_GET_ENUM(EAtomProfileSortType,Z_Param_sort_type);
		P_GET_ENUM(EAtomSortOrderType,Z_Param_order_type);
		P_GET_TARRAY_REF(FAtomProfileItem,Z_Param_Out_sorted_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomProfileData::CriWareAdx2ProfileDataSort(Z_Param_original_item,EAtomProfileSortType(Z_Param_sort_type),EAtomSortOrderType(Z_Param_order_type),Z_Param_Out_sorted_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataUpdate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAtomProfileItem>*)Z_Param__Result=UAtomProfileData::CriWareAdx2ProfileDataUpdate(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAtomProfileData::StaticRegisterNativesUAtomProfileData()
	{
		UClass* Class = UAtomProfileData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CriWareAdx2ProfileDataSort", &UAtomProfileData::execCriWareAdx2ProfileDataSort },
			{ "CriWareAdx2ProfileDataUpdate", &UAtomProfileData::execCriWareAdx2ProfileDataUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics
	{
		struct AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms
		{
			TArray<FAtomProfileItem> original_item;
			EAtomProfileSortType sort_type;
			EAtomSortOrderType order_type;
			TArray<FAtomProfileItem> sorted_item;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_original_item_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_original_item;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sort_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sort_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_order_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_order_type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sorted_item_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sorted_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner = { "original_item", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item = { "original_item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, original_item), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type = { "sort_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sort_type), Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type = { "order_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, order_type), Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner = { "sorted_item", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item = { "sorted_item", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sorted_item), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataSort", nullptr, nullptr, sizeof(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics
	{
		struct AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms
		{
			const UObject* WorldContextObject;
			TArray<FAtomProfileItem> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataUpdate", nullptr, nullptr, sizeof(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomProfileData_NoRegister()
	{
		return UAtomProfileData::StaticClass();
	}
	struct Z_Construct_UClass_UAtomProfileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomProfileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomProfileData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort, "CriWareAdx2ProfileDataSort" }, // 1227662843
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate, "CriWareAdx2ProfileDataUpdate" }, // 3575731333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomProfileData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomProfileData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomProfileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomProfileData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomProfileData_Statics::ClassParams = {
		&UAtomProfileData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomProfileData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomProfileData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomProfileData, 1539166653);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomProfileData>()
	{
		return UAtomProfileData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomProfileData(Z_Construct_UClass_UAtomProfileData, &UAtomProfileData::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomProfileData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomProfileData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
