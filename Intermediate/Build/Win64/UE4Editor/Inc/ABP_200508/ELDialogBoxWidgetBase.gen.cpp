// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDialogBoxWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDialogBoxWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxExternalResultDelegate__DelegateSignature();
// End Cross Module References
	static FName NAME_UELDialogBoxWidgetBase_RequestClose = FName(TEXT("RequestClose"));
	void UELDialogBoxWidgetBase::RequestClose()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxWidgetBase_RequestClose),NULL);
	}
	void UELDialogBoxWidgetBase::StaticRegisterNativesUELDialogBoxWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxWidgetBase, nullptr, "RequestClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDialogBoxWidgetBase_NoRegister()
	{
		return UELDialogBoxWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDialogBoxWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ExternalResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDialogBoxWidgetBase_RequestClose, "RequestClose" }, // 3738475054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDialogBoxWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDialogBoxWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::NewProp_ExternalResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDialogBoxWidgetBase" },
		{ "ModuleRelativePath", "Public/ELDialogBoxWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::NewProp_ExternalResultDelegate = { "ExternalResultDelegate", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELDialogBoxWidgetBase, ExternalResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxExternalResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::NewProp_ExternalResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::NewProp_ExternalResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::NewProp_ExternalResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDialogBoxWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::ClassParams = {
		&UELDialogBoxWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDialogBoxWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDialogBoxWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDialogBoxWidgetBase, 2928727590);
	template<> ABP_200508_API UClass* StaticClass<UELDialogBoxWidgetBase>()
	{
		return UELDialogBoxWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDialogBoxWidgetBase(Z_Construct_UClass_UELDialogBoxWidgetBase, &UELDialogBoxWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDialogBoxWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDialogBoxWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
