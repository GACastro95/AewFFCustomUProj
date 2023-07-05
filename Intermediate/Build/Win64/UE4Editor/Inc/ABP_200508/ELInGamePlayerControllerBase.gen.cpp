// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInGamePlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInGamePlayerControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELInGamePlayerControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELInGamePlayerControllerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPlayerController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(AELInGamePlayerControllerBase::execBindAcceptAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindAcceptAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELInGamePlayerControllerBase::execUnbindAcceptAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAcceptAction();
		P_NATIVE_END;
	}
	static FName NAME_AELInGamePlayerControllerBase_OnPressAcceptButton = FName(TEXT("OnPressAcceptButton"));
	void AELInGamePlayerControllerBase::OnPressAcceptButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELInGamePlayerControllerBase_OnPressAcceptButton),NULL);
	}
	void AELInGamePlayerControllerBase::StaticRegisterNativesAELInGamePlayerControllerBase()
	{
		UClass* Class = AELInGamePlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindAcceptAction", &AELInGamePlayerControllerBase::execBindAcceptAction },
			{ "UnbindAcceptAction", &AELInGamePlayerControllerBase::execUnbindAcceptAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGamePlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGamePlayerControllerBase, nullptr, "BindAcceptAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGamePlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGamePlayerControllerBase, nullptr, "OnPressAcceptButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELInGamePlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELInGamePlayerControllerBase, nullptr, "UnbindAcceptAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELInGamePlayerControllerBase_NoRegister()
	{
		return AELInGamePlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELInGamePlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELNetPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELInGamePlayerControllerBase_BindAcceptAction, "BindAcceptAction" }, // 715474652
		{ &Z_Construct_UFunction_AELInGamePlayerControllerBase_OnPressAcceptButton, "OnPressAcceptButton" }, // 1442002590
		{ &Z_Construct_UFunction_AELInGamePlayerControllerBase_UnbindAcceptAction, "UnbindAcceptAction" }, // 3511351527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELInGamePlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELInGamePlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELInGamePlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::ClassParams = {
		&AELInGamePlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELInGamePlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELInGamePlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELInGamePlayerControllerBase, 201122603);
	template<> ABP_200508_API UClass* StaticClass<AELInGamePlayerControllerBase>()
	{
		return AELInGamePlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELInGamePlayerControllerBase(Z_Construct_UClass_AELInGamePlayerControllerBase, &AELInGamePlayerControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELInGamePlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELInGamePlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
