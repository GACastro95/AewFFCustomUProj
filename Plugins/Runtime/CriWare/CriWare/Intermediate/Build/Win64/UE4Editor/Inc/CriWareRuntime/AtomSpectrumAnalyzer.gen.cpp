// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSpectrumAnalyzer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSpectrumAnalyzer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execCreateDspSpectra)
	{
		P_GET_OBJECT(UAtomAsrRack,Z_Param_asr_rack);
		P_GET_PROPERTY(FStrProperty,Z_Param_bus_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_num_bands);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::CreateDspSpectra(Z_Param_asr_rack,Z_Param_bus_name,Z_Param_num_bands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevels)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::GetLevels(Z_Param_Out_spectra);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevelsDB)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_display_range);
		P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::GetLevelsDB(Z_Param_display_range,Z_Param_Out_spectra);
		P_NATIVE_END;
	}
	void UAtomSpectrumAnalyzer::StaticRegisterNativesUAtomSpectrumAnalyzer()
	{
		UClass* Class = UAtomSpectrumAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDspSpectra", &UAtomSpectrumAnalyzer::execCreateDspSpectra },
			{ "GetLevels", &UAtomSpectrumAnalyzer::execGetLevels },
			{ "GetLevelsDB", &UAtomSpectrumAnalyzer::execGetLevelsDB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics
	{
		struct AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms
		{
			UAtomAsrRack* asr_rack;
			FString bus_name;
			int32 num_bands;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_asr_rack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bus_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bus_name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num_bands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack = { "asr_rack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, asr_rack), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name = { "bus_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, bus_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands = { "num_bands", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, num_bands), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "CreateDspSpectra", nullptr, nullptr, sizeof(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics
	{
		struct AtomSpectrumAnalyzer_eventGetLevels_Parms
		{
			TArray<float> spectra;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spectra;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevels_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevels", nullptr, nullptr, sizeof(AtomSpectrumAnalyzer_eventGetLevels_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics
	{
		struct AtomSpectrumAnalyzer_eventGetLevelsDB_Parms
		{
			float display_range;
			TArray<float> spectra;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_display_range;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spectra;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range = { "display_range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, display_range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevelsDB", nullptr, nullptr, sizeof(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister()
	{
		return UAtomSpectrumAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra, "CreateDspSpectra" }, // 2167358111
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels, "GetLevels" }, // 1167052455
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB, "GetLevelsDB" }, // 1562917577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSpectrumAnalyzer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSpectrumAnalyzer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams = {
		&UAtomSpectrumAnalyzer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomSpectrumAnalyzer, 2276508581);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomSpectrumAnalyzer>()
	{
		return UAtomSpectrumAnalyzer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomSpectrumAnalyzer(Z_Construct_UClass_UAtomSpectrumAnalyzer, &UAtomSpectrumAnalyzer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomSpectrumAnalyzer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSpectrumAnalyzer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
