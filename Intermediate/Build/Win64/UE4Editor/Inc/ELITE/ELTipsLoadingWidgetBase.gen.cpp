// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELTipsLoadingWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTipsLoadingWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELTipsLoadingWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELTipsLoadingWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELTipsLoadingWidgetBase::execSetCheckMode)
	{
		P_GET_UBOOL(Z_Param_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckMode(Z_Param_IsValid);
		P_NATIVE_END;
	}
	static FName NAME_UELTipsLoadingWidgetBase_OnForceEndScreen = FName(TEXT("OnForceEndScreen"));
	void UELTipsLoadingWidgetBase::OnForceEndScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELTipsLoadingWidgetBase_OnForceEndScreen),NULL);
	}
	static FName NAME_UELTipsLoadingWidgetBase_OnMoveCursorIndex = FName(TEXT("OnMoveCursorIndex"));
	void UELTipsLoadingWidgetBase::OnMoveCursorIndex(int32 _addIndex)
	{
		ELTipsLoadingWidgetBase_eventOnMoveCursorIndex_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELTipsLoadingWidgetBase_OnMoveCursorIndex),&Parms);
	}
	static FName NAME_UELTipsLoadingWidgetBase_OnMoveNextLevel = FName(TEXT("OnMoveNextLevel"));
	void UELTipsLoadingWidgetBase::OnMoveNextLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELTipsLoadingWidgetBase_OnMoveNextLevel),NULL);
	}
	void UELTipsLoadingWidgetBase::StaticRegisterNativesUELTipsLoadingWidgetBase()
	{
		UClass* Class = UELTipsLoadingWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCheckMode", &UELTipsLoadingWidgetBase::execSetCheckMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingWidgetBase, nullptr, "OnForceEndScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTipsLoadingWidgetBase_eventOnMoveCursorIndex_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingWidgetBase, nullptr, "OnMoveCursorIndex", nullptr, nullptr, sizeof(ELTipsLoadingWidgetBase_eventOnMoveCursorIndex_Parms), Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingWidgetBase, nullptr, "OnMoveNextLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics
	{
		struct ELTipsLoadingWidgetBase_eventSetCheckMode_Parms
		{
			bool IsValid;
		};
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ELTipsLoadingWidgetBase_eventSetCheckMode_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTipsLoadingWidgetBase_eventSetCheckMode_Parms), &Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::NewProp_IsValid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTipsLoadingWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTipsLoadingWidgetBase, nullptr, "SetCheckMode", nullptr, nullptr, sizeof(ELTipsLoadingWidgetBase_eventSetCheckMode_Parms), Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTipsLoadingWidgetBase_NoRegister()
	{
		return UELTipsLoadingWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnForceEndScreen, "OnForceEndScreen" }, // 3177359978
		{ &Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveCursorIndex, "OnMoveCursorIndex" }, // 2523677803
		{ &Z_Construct_UFunction_UELTipsLoadingWidgetBase_OnMoveNextLevel, "OnMoveNextLevel" }, // 2476232930
		{ &Z_Construct_UFunction_UELTipsLoadingWidgetBase_SetCheckMode, "SetCheckMode" }, // 4194695969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTipsLoadingWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTipsLoadingWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTipsLoadingWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::ClassParams = {
		&UELTipsLoadingWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTipsLoadingWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTipsLoadingWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTipsLoadingWidgetBase, 1047209106);
	template<> ELITE_API UClass* StaticClass<UELTipsLoadingWidgetBase>()
	{
		return UELTipsLoadingWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTipsLoadingWidgetBase(Z_Construct_UClass_UELTipsLoadingWidgetBase, &UELTipsLoadingWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELTipsLoadingWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTipsLoadingWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
