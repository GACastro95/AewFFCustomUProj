// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCommentaryLoadingExecutorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCommentaryLoadingExecutorBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCommentaryLoadingExecutorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCommentaryLoadingExecutorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingExecResource();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AELCommentaryLoadingExecutorBase::execEndLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCommentaryLoadingExecutorBase::execOnEndLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCommentaryLoadingExecutorBase::execOnOverrideZOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverrideZOrder_Implementation(Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCommentaryLoadingExecutorBase::execOnStartLoadingScreen)
	{
		P_GET_STRUCT(FCommentaryLoadingExecResource,Z_Param__textureInfo);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out__commentText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartLoadingScreen_Implementation(Z_Param__textureInfo,Z_Param_Out__commentText);
		P_NATIVE_END;
	}
	static FName NAME_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen = FName(TEXT("OnEndLoadingScreen"));
	void AELCommentaryLoadingExecutorBase::OnEndLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen),NULL);
	}
	static FName NAME_AELCommentaryLoadingExecutorBase_OnOverrideZOrder = FName(TEXT("OnOverrideZOrder"));
	void AELCommentaryLoadingExecutorBase::OnOverrideZOrder(const int32 ZOrder)
	{
		ELCommentaryLoadingExecutorBase_eventOnOverrideZOrder_Parms Parms;
		Parms.ZOrder=ZOrder;
		ProcessEvent(FindFunctionChecked(NAME_AELCommentaryLoadingExecutorBase_OnOverrideZOrder),&Parms);
	}
	static FName NAME_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen = FName(TEXT("OnStartLoadingScreen"));
	void AELCommentaryLoadingExecutorBase::OnStartLoadingScreen(FCommentaryLoadingExecResource _textureInfo, FText const& _commentText)
	{
		ELCommentaryLoadingExecutorBase_eventOnStartLoadingScreen_Parms Parms;
		Parms._textureInfo=_textureInfo;
		Parms._commentText=_commentText;
		ProcessEvent(FindFunctionChecked(NAME_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen),&Parms);
	}
	void AELCommentaryLoadingExecutorBase::StaticRegisterNativesAELCommentaryLoadingExecutorBase()
	{
		UClass* Class = AELCommentaryLoadingExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndLoadingScreen", &AELCommentaryLoadingExecutorBase::execEndLoadingScreen },
			{ "OnEndLoadingScreen", &AELCommentaryLoadingExecutorBase::execOnEndLoadingScreen },
			{ "OnOverrideZOrder", &AELCommentaryLoadingExecutorBase::execOnOverrideZOrder },
			{ "OnStartLoadingScreen", &AELCommentaryLoadingExecutorBase::execOnStartLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCommentaryLoadingExecutorBase, nullptr, "EndLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCommentaryLoadingExecutorBase, nullptr, "OnEndLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingExecutorBase_eventOnOverrideZOrder_Parms, ZOrder), METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::NewProp_ZOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCommentaryLoadingExecutorBase, nullptr, "OnOverrideZOrder", nullptr, nullptr, sizeof(ELCommentaryLoadingExecutorBase_eventOnOverrideZOrder_Parms), Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__textureInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__commentText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__commentText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__textureInfo = { "_textureInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingExecutorBase_eventOnStartLoadingScreen_Parms, _textureInfo), Z_Construct_UScriptStruct_FCommentaryLoadingExecResource, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__commentText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__commentText = { "_commentText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommentaryLoadingExecutorBase_eventOnStartLoadingScreen_Parms, _commentText), METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__commentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__commentText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__textureInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::NewProp__commentText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCommentaryLoadingExecutorBase, nullptr, "OnStartLoadingScreen", nullptr, nullptr, sizeof(ELCommentaryLoadingExecutorBase_eventOnStartLoadingScreen_Parms), Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCommentaryLoadingExecutorBase_NoRegister()
	{
		return AELCommentaryLoadingExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics
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
	UObject* (*const Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_EndLoadingScreen, "EndLoadingScreen" }, // 1922766020
		{ &Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnEndLoadingScreen, "OnEndLoadingScreen" }, // 2417738948
		{ &Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnOverrideZOrder, "OnOverrideZOrder" }, // 2949065304
		{ &Z_Construct_UFunction_AELCommentaryLoadingExecutorBase_OnStartLoadingScreen, "OnStartLoadingScreen" }, // 2367096952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCommentaryLoadingExecutorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCommentaryLoadingExecutorBase" },
		{ "ModuleRelativePath", "Public/ELCommentaryLoadingExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCommentaryLoadingExecutorBase, CompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_CommentaryLoadingCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::NewProp_CompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::NewProp_CompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCommentaryLoadingExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::ClassParams = {
		&AELCommentaryLoadingExecutorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCommentaryLoadingExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCommentaryLoadingExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCommentaryLoadingExecutorBase, 3120862428);
	template<> ABP_200508_API UClass* StaticClass<AELCommentaryLoadingExecutorBase>()
	{
		return AELCommentaryLoadingExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCommentaryLoadingExecutorBase(Z_Construct_UClass_AELCommentaryLoadingExecutorBase, &AELCommentaryLoadingExecutorBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCommentaryLoadingExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCommentaryLoadingExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
