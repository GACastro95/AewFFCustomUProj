// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSReports.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSReports() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReports_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReports();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSReportsSendPlayerBehaviorReportDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSReports::execSendReport)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strReportedProductUserId);
		P_GET_ENUM(EEOSPlayerReportsCategory,Z_Param__enCategory);
		P_GET_PROPERTY(FStrProperty,Z_Param__strMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param__strContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendReport(Z_Param__strReportedProductUserId,EEOSPlayerReportsCategory(Z_Param__enCategory),Z_Param__strMessage,Z_Param__strContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSReports::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSReportsAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSReports::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	void UEOSReports::StaticRegisterNativesUEOSReports()
	{
		UClass* Class = UEOSReports::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendReport", &UEOSReports::execSendReport },
			{ "SetApiVersion", &UEOSReports::execSetApiVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSReports_SendReport_Statics
	{
		struct EOSReports_eventSendReport_Parms
		{
			FString _strReportedProductUserId;
			EEOSPlayerReportsCategory _enCategory;
			FString _strMessage;
			FString _strContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strReportedProductUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strReportedProductUserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strReportedProductUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strReportedProductUserId = { "_strReportedProductUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReports_eventSendReport_Parms, _strReportedProductUserId), METADATA_PARAMS(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strReportedProductUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strReportedProductUserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__enCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__enCategory = { "_enCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReports_eventSendReport_Parms, _enCategory), Z_Construct_UEnum_yEOSSDK_EEOSPlayerReportsCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strMessage = { "_strMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReports_eventSendReport_Parms, _strMessage), METADATA_PARAMS(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strContext = { "_strContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReports_eventSendReport_Parms, _strContext), METADATA_PARAMS(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strContext_MetaData)) };
	void Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSReports_eventSendReport_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSReports_eventSendReport_Parms), &Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSReports_SendReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strReportedProductUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__enCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__enCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp__strContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SendReport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReports_SendReport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSReports.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSReports_SendReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSReports, nullptr, "SendReport", nullptr, nullptr, sizeof(EOSReports_eventSendReport_Parms), Z_Construct_UFunction_UEOSReports_SendReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SendReport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSReports_SendReport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SendReport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSReports_SendReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSReports_SendReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics
	{
		struct EOSReports_eventSetApiVersion_Parms
		{
			FEOSReportsAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReports_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSReportsAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSReports.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSReports, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSReports_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSReports_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSReports_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSReports_NoRegister()
	{
		return UEOSReports::StaticClass();
	}
	struct Z_Construct_UClass_UEOSReports_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendPlayerBehaviorReportDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SendPlayerBehaviorReportDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSReports_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSReports_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSReports_SendReport, "SendReport" }, // 1603730304
		{ &Z_Construct_UFunction_UEOSReports_SetApiVersion, "SetApiVersion" }, // 3422421377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSReports_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSReports.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSReports.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSReports_Statics::NewProp_SendPlayerBehaviorReportDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSReports" },
		{ "ModuleRelativePath", "Public/EOSReports.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSReports_Statics::NewProp_SendPlayerBehaviorReportDispatcher = { "SendPlayerBehaviorReportDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSReports, SendPlayerBehaviorReportDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSReportsSendPlayerBehaviorReportDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSReports_Statics::NewProp_SendPlayerBehaviorReportDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSReports_Statics::NewProp_SendPlayerBehaviorReportDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSReports_Statics::NewProp_SendPlayerBehaviorReportDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSReports_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSReports>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSReports_Statics::ClassParams = {
		&UEOSReports::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSReports_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSReports_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSReports_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSReports_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSReports()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSReports_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSReports, 1620619361);
	template<> YEOSSDK_API UClass* StaticClass<UEOSReports>()
	{
		return UEOSReports::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSReports(Z_Construct_UClass_UEOSReports, &UEOSReports::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSReports"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSReports);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
