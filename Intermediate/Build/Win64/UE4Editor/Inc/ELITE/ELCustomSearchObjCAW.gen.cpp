// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchObjCAW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchObjCAW() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjCAW_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjCAW();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchEditPartsData();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch();
// End Cross Module References
	DEFINE_FUNCTION(UELCustomSearchObjCAW::execSearchEditParts)
	{
		P_GET_TARRAY_REF(FELCustomSearchEditPartsData,Z_Param_Out__EditData);
		P_GET_TSET_REF(EELCustomSearch,Z_Param_Out_CustomSearchSet);
		P_GET_TARRAY_REF(FELCustomSearchEditPartsData,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchEditParts(Z_Param_Out__EditData,Z_Param_Out_CustomSearchSet,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	void UELCustomSearchObjCAW::StaticRegisterNativesUELCustomSearchObjCAW()
	{
		UClass* Class = UELCustomSearchObjCAW::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SearchEditParts", &UELCustomSearchObjCAW::execSearchEditParts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics
	{
		struct ELCustomSearchObjCAW_eventSearchEditParts_Parms
		{
			TArray<FELCustomSearchEditPartsData> _EditData;
			TSet<EELCustomSearch> CustomSearchSet;
			TArray<FELCustomSearchEditPartsData> outData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__EditData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__EditData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__EditData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomSearchSet_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomSearchSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSearchSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomSearchSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData_Inner = { "_EditData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCustomSearchEditPartsData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData = { "_EditData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAW_eventSearchEditParts_Parms, _EditData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_ElementProp = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_EELCustomSearch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAW_eventSearchEditParts_Parms, CustomSearchSet), METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_outData_Inner = { "outData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCustomSearchEditPartsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAW_eventSearchEditParts_Parms, outData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp__EditData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_CustomSearchSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_outData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::NewProp_outData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAW.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjCAW, nullptr, "SearchEditParts", nullptr, nullptr, sizeof(ELCustomSearchObjCAW_eventSearchEditParts_Parms), Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCustomSearchObjCAW_NoRegister()
	{
		return UELCustomSearchObjCAW::StaticClass();
	}
	struct Z_Construct_UClass_UELCustomSearchObjCAW_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCustomSearchObjCAW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCustomSearchObjBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCustomSearchObjCAW_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCustomSearchObjCAW_SearchEditParts, "SearchEditParts" }, // 1753325949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchObjCAW_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCustomSearchObjCAW.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAW.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCustomSearchObjCAW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCustomSearchObjCAW>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCustomSearchObjCAW_Statics::ClassParams = {
		&UELCustomSearchObjCAW::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchObjCAW_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchObjCAW_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCustomSearchObjCAW()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCustomSearchObjCAW_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCustomSearchObjCAW, 1610297320);
	template<> ELITE_API UClass* StaticClass<UELCustomSearchObjCAW>()
	{
		return UELCustomSearchObjCAW::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCustomSearchObjCAW(Z_Construct_UClass_UELCustomSearchObjCAW, &UELCustomSearchObjCAW::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCustomSearchObjCAW"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCustomSearchObjCAW);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
