// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTipsLoadingExecutorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTipsLoadingExecutorBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELTipsLoadingExecutorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELTipsLoadingExecutorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FTipsLoadingResourceInfo();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELTipsLoadingExecutorBase::execEndLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELTipsLoadingExecutorBase::execOnEndLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELTipsLoadingExecutorBase::execOnStartLoadingScreen)
	{
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__Category);
		P_GET_STRUCT(FTipsLoadingResourceInfo,Z_Param__resourceInfo);
		P_GET_UBOOL(Z_Param__isFadeInStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartLoadingScreen_Implementation(ETipsLoadingCategory(Z_Param__Category),Z_Param__resourceInfo,Z_Param__isFadeInStart);
		P_NATIVE_END;
	}
	static FName NAME_AELTipsLoadingExecutorBase_OnEndLoadingScreen = FName(TEXT("OnEndLoadingScreen"));
	void AELTipsLoadingExecutorBase::OnEndLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELTipsLoadingExecutorBase_OnEndLoadingScreen),NULL);
	}
	static FName NAME_AELTipsLoadingExecutorBase_OnStartLoadingScreen = FName(TEXT("OnStartLoadingScreen"));
	void AELTipsLoadingExecutorBase::OnStartLoadingScreen(ETipsLoadingCategory _Category, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart)
	{
		ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms Parms;
		Parms._Category=_Category;
		Parms._resourceInfo=_resourceInfo;
		Parms._isFadeInStart=_isFadeInStart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELTipsLoadingExecutorBase_OnStartLoadingScreen),&Parms);
	}
	void AELTipsLoadingExecutorBase::StaticRegisterNativesAELTipsLoadingExecutorBase()
	{
		UClass* Class = AELTipsLoadingExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndLoadingScreen", &AELTipsLoadingExecutorBase::execEndLoadingScreen },
			{ "OnEndLoadingScreen", &AELTipsLoadingExecutorBase::execOnEndLoadingScreen },
			{ "OnStartLoadingScreen", &AELTipsLoadingExecutorBase::execOnStartLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTipsLoadingExecutorBase, nullptr, "EndLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTipsLoadingExecutorBase, nullptr, "OnEndLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__resourceInfo;
		static void NewProp__isFadeInStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFadeInStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__Category = { "_Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms, _Category), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__resourceInfo = { "_resourceInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms, _resourceInfo), Z_Construct_UScriptStruct_FTipsLoadingResourceInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__isFadeInStart_SetBit(void* Obj)
	{
		((ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms*)Obj)->_isFadeInStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__isFadeInStart = { "_isFadeInStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms), &Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__isFadeInStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__resourceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__isFadeInStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELTipsLoadingExecutorBase, nullptr, "OnStartLoadingScreen", nullptr, nullptr, sizeof(ELTipsLoadingExecutorBase_eventOnStartLoadingScreen_Parms), Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELTipsLoadingExecutorBase_NoRegister()
	{
		return AELTipsLoadingExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELTipsLoadingExecutorBase_EndLoadingScreen, "EndLoadingScreen" }, // 615935288
		{ &Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnEndLoadingScreen, "OnEndLoadingScreen" }, // 2159697644
		{ &Z_Construct_UFunction_AELTipsLoadingExecutorBase_OnStartLoadingScreen, "OnStartLoadingScreen" }, // 2351101222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTipsLoadingExecutorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingExecutorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTipsLoadingExecutorBase" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELTipsLoadingExecutorBase, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TipsLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::NewProp_CompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELTipsLoadingExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::ClassParams = {
		&AELTipsLoadingExecutorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELTipsLoadingExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELTipsLoadingExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELTipsLoadingExecutorBase, 4131344101);
	template<> ABP_200508_API UClass* StaticClass<AELTipsLoadingExecutorBase>()
	{
		return AELTipsLoadingExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELTipsLoadingExecutorBase(Z_Construct_UClass_AELTipsLoadingExecutorBase, &AELTipsLoadingExecutorBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELTipsLoadingExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELTipsLoadingExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
