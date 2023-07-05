// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_LoadingScreen/Public/ELLoadingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLoadingWidget() {}
// Cross Module References
	ELITE_LOADINGSCREEN_API UClass* Z_Construct_UClass_UELLoadingWidget_NoRegister();
	ELITE_LOADINGSCREEN_API UClass* Z_Construct_UClass_UELLoadingWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ELITE_LoadingScreen();
// End Cross Module References
	DEFINE_FUNCTION(UELLoadingWidget::execOnPlayLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLoadingWidget::execOnStopLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELLoadingWidget_OnPlayLoadingScreen = FName(TEXT("OnPlayLoadingScreen"));
	void UELLoadingWidget::OnPlayLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLoadingWidget_OnPlayLoadingScreen),NULL);
	}
	static FName NAME_UELLoadingWidget_OnStopLoadingScreen = FName(TEXT("OnStopLoadingScreen"));
	void UELLoadingWidget::OnStopLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELLoadingWidget_OnStopLoadingScreen),NULL);
	}
	void UELLoadingWidget::StaticRegisterNativesUELLoadingWidget()
	{
		UClass* Class = UELLoadingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayLoadingScreen", &UELLoadingWidget::execOnPlayLoadingScreen },
			{ "OnStopLoadingScreen", &UELLoadingWidget::execOnStopLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLoadingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLoadingWidget, nullptr, "OnPlayLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLoadingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLoadingWidget, nullptr, "OnStopLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLoadingWidget_NoRegister()
	{
		return UELLoadingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UELLoadingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLoadingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_LoadingScreen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLoadingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLoadingWidget_OnPlayLoadingScreen, "OnPlayLoadingScreen" }, // 1719215626
		{ &Z_Construct_UFunction_UELLoadingWidget_OnStopLoadingScreen, "OnStopLoadingScreen" }, // 2546721616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLoadingWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLoadingWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLoadingWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLoadingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLoadingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLoadingWidget_Statics::ClassParams = {
		&UELLoadingWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELLoadingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLoadingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLoadingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLoadingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLoadingWidget, 1273192776);
	template<> ELITE_LOADINGSCREEN_API UClass* StaticClass<UELLoadingWidget>()
	{
		return UELLoadingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLoadingWidget(Z_Construct_UClass_UELLoadingWidget, &UELLoadingWidget::StaticClass, TEXT("/Script/ELITE_LoadingScreen"), TEXT("UELLoadingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLoadingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
