// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCommonLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCommonLayout() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCommonLayout_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCommonLayout();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	static FName NAME_UELCommonLayout_RemoveAllChildWidgets = FName(TEXT("RemoveAllChildWidgets"));
	void UELCommonLayout::RemoveAllChildWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCommonLayout_RemoveAllChildWidgets),NULL);
	}
	void UELCommonLayout::StaticRegisterNativesUELCommonLayout()
	{
	}
	struct Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonLayout, nullptr, "RemoveAllChildWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCommonLayout_NoRegister()
	{
		return UELCommonLayout::StaticClass();
	}
	struct Z_Construct_UClass_UELCommonLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseCanvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCommonLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCommonLayout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCommonLayout_RemoveAllChildWidgets, "RemoveAllChildWidgets" }, // 1779703689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommonLayout_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCommonLayout.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCommonLayout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommonLayout_Statics::NewProp_BaseCanvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommonLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCommonLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCommonLayout_Statics::NewProp_BaseCanvas = { "BaseCanvas", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCommonLayout, BaseCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCommonLayout_Statics::NewProp_BaseCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommonLayout_Statics::NewProp_BaseCanvas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCommonLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCommonLayout_Statics::NewProp_BaseCanvas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCommonLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCommonLayout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCommonLayout_Statics::ClassParams = {
		&UELCommonLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCommonLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCommonLayout_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCommonLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommonLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCommonLayout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCommonLayout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCommonLayout, 2818060693);
	template<> ABP_200508_API UClass* StaticClass<UELCommonLayout>()
	{
		return UELCommonLayout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCommonLayout(Z_Construct_UClass_UELCommonLayout, &UELCommonLayout::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCommonLayout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCommonLayout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
