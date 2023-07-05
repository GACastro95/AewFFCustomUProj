// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventTitleWindowWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventTitleWindowWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELCareerEventTitleWindowWidgetBase_SetupText = FName(TEXT("SetupText"));
	void UELCareerEventTitleWindowWidgetBase::SetupText()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventTitleWindowWidgetBase_SetupText),NULL);
	}
	void UELCareerEventTitleWindowWidgetBase::StaticRegisterNativesUELCareerEventTitleWindowWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventTitleWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase, nullptr, "SetupText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_NoRegister()
	{
		return UELCareerEventTitleWindowWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerEventTitleWindowWidgetBase_SetupText, "SetupText" }, // 3886768905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerEventTitleWindowWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventTitleWindowWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerEventTitleWindowWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::ClassParams = {
		&UELCareerEventTitleWindowWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerEventTitleWindowWidgetBase, 1560264952);
	template<> ABP_200508_API UClass* StaticClass<UELCareerEventTitleWindowWidgetBase>()
	{
		return UELCareerEventTitleWindowWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerEventTitleWindowWidgetBase(Z_Construct_UClass_UELCareerEventTitleWindowWidgetBase, &UELCareerEventTitleWindowWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerEventTitleWindowWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerEventTitleWindowWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
