// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerHUBMenuMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerHUBMenuMain() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuMain_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuMain();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStateManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerHUBMenuMain::execChangeTabIndex)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeTabIndex(Z_Param_bLeft);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerHUBMenuMain_EventInAnimation = FName(TEXT("EventInAnimation"));
	void UELCareerHUBMenuMain::EventInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMain_EventInAnimation),NULL);
	}
	static FName NAME_UELCareerHUBMenuMain_EventOutAnimation = FName(TEXT("EventOutAnimation"));
	void UELCareerHUBMenuMain::EventOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMain_EventOutAnimation),NULL);
	}
	static FName NAME_UELCareerHUBMenuMain_FinishRodeToElite = FName(TEXT("FinishRodeToElite"));
	void UELCareerHUBMenuMain::FinishRodeToElite()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMain_FinishRodeToElite),NULL);
	}
	static FName NAME_UELCareerHUBMenuMain_SetupChildWidgetBroadcast = FName(TEXT("SetupChildWidgetBroadcast"));
	void UELCareerHUBMenuMain::SetupChildWidgetBroadcast(AELCareerStateManager* pManager)
	{
		ELCareerHUBMenuMain_eventSetupChildWidgetBroadcast_Parms Parms;
		Parms.pManager=pManager;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuMain_SetupChildWidgetBroadcast),&Parms);
	}
	void UELCareerHUBMenuMain::StaticRegisterNativesUELCareerHUBMenuMain()
	{
		UClass* Class = UELCareerHUBMenuMain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeTabIndex", &UELCareerHUBMenuMain::execChangeTabIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics
	{
		struct ELCareerHUBMenuMain_eventChangeTabIndex_Parms
		{
			bool bLeft;
		};
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuMain_eventChangeTabIndex_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuMain_eventChangeTabIndex_Parms), &Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::NewProp_bLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMain, nullptr, "ChangeTabIndex", nullptr, nullptr, sizeof(ELCareerHUBMenuMain_eventChangeTabIndex_Parms), Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMain, nullptr, "EventInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMain, nullptr, "EventOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMain, nullptr, "FinishRodeToElite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::NewProp_pManager = { "pManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuMain_eventSetupChildWidgetBroadcast_Parms, pManager), Z_Construct_UClass_AELCareerStateManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::NewProp_pManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuMain, nullptr, "SetupChildWidgetBroadcast", nullptr, nullptr, sizeof(ELCareerHUBMenuMain_eventSetupChildWidgetBroadcast_Parms), Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerHUBMenuMain_NoRegister()
	{
		return UELCareerHUBMenuMain::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerHUBMenuMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerHUBMenuMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerHUBMenuMain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerHUBMenuMain_ChangeTabIndex, "ChangeTabIndex" }, // 1866941444
		{ &Z_Construct_UFunction_UELCareerHUBMenuMain_EventInAnimation, "EventInAnimation" }, // 1765821682
		{ &Z_Construct_UFunction_UELCareerHUBMenuMain_EventOutAnimation, "EventOutAnimation" }, // 3782485332
		{ &Z_Construct_UFunction_UELCareerHUBMenuMain_FinishRodeToElite, "FinishRodeToElite" }, // 1163360401
		{ &Z_Construct_UFunction_UELCareerHUBMenuMain_SetupChildWidgetBroadcast, "SetupChildWidgetBroadcast" }, // 716268598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuMain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerHUBMenuMain.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuMain.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerHUBMenuMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerHUBMenuMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerHUBMenuMain_Statics::ClassParams = {
		&UELCareerHUBMenuMain::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerHUBMenuMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerHUBMenuMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerHUBMenuMain, 326117460);
	template<> ABP_200508_API UClass* StaticClass<UELCareerHUBMenuMain>()
	{
		return UELCareerHUBMenuMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerHUBMenuMain(Z_Construct_UClass_UELCareerHUBMenuMain, &UELCareerHUBMenuMain::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerHUBMenuMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerHUBMenuMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
