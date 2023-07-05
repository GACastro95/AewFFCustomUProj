// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuForBugReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuForBugReport() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuForBugReport_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuForBugReport();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FBugReportSettings();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuForBugReport::execCreateYDebugMenuForBugReport)
	{
		P_GET_OBJECT_REF(UYDebugMenuForBugReport,Z_Param_Out__pcDebugMenuForBugReport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuForBugReport::CreateYDebugMenuForBugReport(Z_Param_Out__pcDebugMenuForBugReport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuForBugReport::execSetup)
	{
		P_GET_STRUCT_REF(FBugReportSettings,Z_Param_Out__stSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out__stSettings);
		P_NATIVE_END;
	}
	void UYDebugMenuForBugReport::StaticRegisterNativesUYDebugMenuForBugReport()
	{
		UClass* Class = UYDebugMenuForBugReport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYDebugMenuForBugReport", &UYDebugMenuForBugReport::execCreateYDebugMenuForBugReport },
			{ "Setup", &UYDebugMenuForBugReport::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics
	{
		struct YDebugMenuForBugReport_eventCreateYDebugMenuForBugReport_Parms
		{
			UYDebugMenuForBugReport* _pcDebugMenuForBugReport;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugMenuForBugReport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp__pcDebugMenuForBugReport = { "_pcDebugMenuForBugReport", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuForBugReport_eventCreateYDebugMenuForBugReport_Parms, _pcDebugMenuForBugReport), Z_Construct_UClass_UYDebugMenuForBugReport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuForBugReport_eventCreateYDebugMenuForBugReport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuForBugReport_eventCreateYDebugMenuForBugReport_Parms), &Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp__pcDebugMenuForBugReport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuForBugReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuForBugReport, nullptr, "CreateYDebugMenuForBugReport", nullptr, nullptr, sizeof(YDebugMenuForBugReport_eventCreateYDebugMenuForBugReport_Parms), Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics
	{
		struct YDebugMenuForBugReport_eventSetup_Parms
		{
			FBugReportSettings _stSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::NewProp__stSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::NewProp__stSettings = { "_stSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuForBugReport_eventSetup_Parms, _stSettings), Z_Construct_UScriptStruct_FBugReportSettings, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::NewProp__stSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::NewProp__stSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::NewProp__stSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuForBugReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuForBugReport, nullptr, "Setup", nullptr, nullptr, sizeof(YDebugMenuForBugReport_eventSetup_Parms), Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuForBugReport_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuForBugReport_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuForBugReport_NoRegister()
	{
		return UYDebugMenuForBugReport::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuForBugReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuForBugReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuForBugReport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuForBugReport_CreateYDebugMenuForBugReport, "CreateYDebugMenuForBugReport" }, // 2630206266
		{ &Z_Construct_UFunction_UYDebugMenuForBugReport_Setup, "Setup" }, // 3004919025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuForBugReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuForBugReport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuForBugReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuForBugReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuForBugReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuForBugReport_Statics::ClassParams = {
		&UYDebugMenuForBugReport::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuForBugReport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuForBugReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuForBugReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuForBugReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuForBugReport, 1306274090);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuForBugReport>()
	{
		return UYDebugMenuForBugReport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuForBugReport(Z_Construct_UClass_UYDebugMenuForBugReport, &UYDebugMenuForBugReport::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuForBugReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuForBugReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
