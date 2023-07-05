// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBottomHelpManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBottomHelpManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELBottomHelpManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELBottomHelpManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELBottomHelpManager::execGetBottomHelpWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetBottomHelpWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBottomHelpManager::execGetParentLayoutWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetParentLayoutWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBottomHelpManager::execSetCommonLayoutWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param__widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCommonLayoutWidget(Z_Param__widget);
		P_NATIVE_END;
	}
	void UELBottomHelpManager::StaticRegisterNativesUELBottomHelpManager()
	{
		UClass* Class = UELBottomHelpManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBottomHelpWidget", &UELBottomHelpManager::execGetBottomHelpWidget },
			{ "GetParentLayoutWidget", &UELBottomHelpManager::execGetParentLayoutWidget },
			{ "SetCommonLayoutWidget", &UELBottomHelpManager::execSetCommonLayoutWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics
	{
		struct ELBottomHelpManager_eventGetBottomHelpWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBottomHelpManager_eventGetBottomHelpWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBottomHelpManager, nullptr, "GetBottomHelpWidget", nullptr, nullptr, sizeof(ELBottomHelpManager_eventGetBottomHelpWidget_Parms), Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics
	{
		struct ELBottomHelpManager_eventGetParentLayoutWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBottomHelpManager_eventGetParentLayoutWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBottomHelpManager, nullptr, "GetParentLayoutWidget", nullptr, nullptr, sizeof(ELBottomHelpManager_eventGetParentLayoutWidget_Parms), Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics
	{
		struct ELBottomHelpManager_eventSetCommonLayoutWidget_Parms
		{
			UUserWidget* _widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::NewProp__widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBottomHelpManager_eventSetCommonLayoutWidget_Parms, _widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::NewProp__widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::NewProp__widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::NewProp__widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBottomHelpManager, nullptr, "SetCommonLayoutWidget", nullptr, nullptr, sizeof(ELBottomHelpManager_eventSetCommonLayoutWidget_Parms), Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBottomHelpManager_NoRegister()
	{
		return UELBottomHelpManager::StaticClass();
	}
	struct Z_Construct_UClass_UELBottomHelpManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BottomHelpWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BottomHelpWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ParentLayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_ParentLayoutWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBottomHelpManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBottomHelpManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBottomHelpManager_GetBottomHelpWidget, "GetBottomHelpWidget" }, // 293664438
		{ &Z_Construct_UFunction_UELBottomHelpManager_GetParentLayoutWidget, "GetParentLayoutWidget" }, // 2006951718
		{ &Z_Construct_UFunction_UELBottomHelpManager_SetCommonLayoutWidget, "SetCommonLayoutWidget" }, // 3644623193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBottomHelpManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBottomHelpManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_BottomHelpWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBottomHelpManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_BottomHelpWidget = { "m_BottomHelpWidget", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBottomHelpManager, m_BottomHelpWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_BottomHelpWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_BottomHelpWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_ParentLayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBottomHelpManager" },
		{ "ModuleRelativePath", "Public/ELBottomHelpManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_ParentLayoutWidget = { "m_ParentLayoutWidget", nullptr, (EPropertyFlags)0x0044000000080009, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELBottomHelpManager, m_ParentLayoutWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_ParentLayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_ParentLayoutWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELBottomHelpManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_BottomHelpWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELBottomHelpManager_Statics::NewProp_m_ParentLayoutWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBottomHelpManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBottomHelpManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBottomHelpManager_Statics::ClassParams = {
		&UELBottomHelpManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELBottomHelpManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELBottomHelpManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELBottomHelpManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBottomHelpManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBottomHelpManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBottomHelpManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBottomHelpManager, 2607966557);
	template<> ABP_200508_API UClass* StaticClass<UELBottomHelpManager>()
	{
		return UELBottomHelpManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBottomHelpManager(Z_Construct_UClass_UELBottomHelpManager, &UELBottomHelpManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELBottomHelpManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBottomHelpManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
