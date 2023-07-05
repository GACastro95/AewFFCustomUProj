// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELBootScreenWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBootScreenWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELBootScreenWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELBootScreenWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static FName NAME_UELBootScreenWidgetBase_OnPressedSkip = FName(TEXT("OnPressedSkip"));
	void UELBootScreenWidgetBase::OnPressedSkip()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELBootScreenWidgetBase_OnPressedSkip),NULL);
	}
	void UELBootScreenWidgetBase::StaticRegisterNativesUELBootScreenWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBootScreenWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBootScreenWidgetBase, nullptr, "OnPressedSkip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBootScreenWidgetBase_NoRegister()
	{
		return UELBootScreenWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELBootScreenWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBootScreenWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBootScreenWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBootScreenWidgetBase_OnPressedSkip, "OnPressedSkip" }, // 79366234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBootScreenWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBootScreenWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBootScreenWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBootScreenWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBootScreenWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBootScreenWidgetBase_Statics::ClassParams = {
		&UELBootScreenWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELBootScreenWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBootScreenWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBootScreenWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBootScreenWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBootScreenWidgetBase, 2964745965);
	template<> ELITE_API UClass* StaticClass<UELBootScreenWidgetBase>()
	{
		return UELBootScreenWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBootScreenWidgetBase(Z_Construct_UClass_UELBootScreenWidgetBase, &UELBootScreenWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELBootScreenWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBootScreenWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
