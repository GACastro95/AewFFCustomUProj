// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSModeRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSModeRewardWidget() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeRewardWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeRewardWidget();
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSModeRewardWidget::execOperationStickUpDown)
	{
		P_GET_UBOOL(Z_Param_IsUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OperationStickUpDown(Z_Param_IsUp);
		P_NATIVE_END;
	}
	void UELSSModeRewardWidget::StaticRegisterNativesUELSSModeRewardWidget()
	{
		UClass* Class = UELSSModeRewardWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OperationStickUpDown", &UELSSModeRewardWidget::execOperationStickUpDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics
	{
		struct ELSSModeRewardWidget_eventOperationStickUpDown_Parms
		{
			bool IsUp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUp_MetaData[];
#endif
		static void NewProp_IsUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp_SetBit(void* Obj)
	{
		((ELSSModeRewardWidget_eventOperationStickUpDown_Parms*)Obj)->IsUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp = { "IsUp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSModeRewardWidget_eventOperationStickUpDown_Parms), &Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::NewProp_IsUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSModeRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSModeRewardWidget, nullptr, "OperationStickUpDown", nullptr, nullptr, sizeof(ELSSModeRewardWidget_eventOperationStickUpDown_Parms), Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSModeRewardWidget_NoRegister()
	{
		return UELSSModeRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UELSSModeRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSModeRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSModeRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSModeRewardWidget_OperationStickUpDown, "OperationStickUpDown" }, // 2280166193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSModeRewardWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSModeRewardWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSModeRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSModeRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSModeRewardWidget_Statics::ClassParams = {
		&UELSSModeRewardWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSModeRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSModeRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSModeRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSModeRewardWidget, 1984085246);
	template<> ABP_200508_API UClass* StaticClass<UELSSModeRewardWidget>()
	{
		return UELSSModeRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSModeRewardWidget(Z_Construct_UClass_UELSSModeRewardWidget, &UELSSModeRewardWidget::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSModeRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSModeRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
