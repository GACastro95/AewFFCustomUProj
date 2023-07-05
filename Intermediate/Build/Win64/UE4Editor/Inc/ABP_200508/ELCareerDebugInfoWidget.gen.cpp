// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerDebugInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerDebugInfoWidget() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerDebugInfoWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerDebugInfoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FName NAME_UELCareerDebugInfoWidget_PushDebugMessage = FName(TEXT("PushDebugMessage"));
	void UELCareerDebugInfoWidget::PushDebugMessage(const FString& rMessege, FLinearColor const& rColor)
	{
		ELCareerDebugInfoWidget_eventPushDebugMessage_Parms Parms;
		Parms.rMessege=rMessege;
		Parms.rColor=rColor;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerDebugInfoWidget_PushDebugMessage),&Parms);
	}
	void UELCareerDebugInfoWidget::StaticRegisterNativesUELCareerDebugInfoWidget()
	{
	}
	struct Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rMessege_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rMessege;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rMessege_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rMessege = { "rMessege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDebugInfoWidget_eventPushDebugMessage_Parms, rMessege), METADATA_PARAMS(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rMessege_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rMessege_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rColor = { "rColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerDebugInfoWidget_eventPushDebugMessage_Parms, rColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rMessege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::NewProp_rColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerDebugInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerDebugInfoWidget, nullptr, "PushDebugMessage", nullptr, nullptr, sizeof(ELCareerDebugInfoWidget_eventPushDebugMessage_Parms), Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerDebugInfoWidget_NoRegister()
	{
		return UELCareerDebugInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerDebugInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerDebugInfoWidget_PushDebugMessage, "PushDebugMessage" }, // 4039362173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerDebugInfoWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerDebugInfoWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerDebugInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::ClassParams = {
		&UELCareerDebugInfoWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerDebugInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerDebugInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerDebugInfoWidget, 2247176157);
	template<> ABP_200508_API UClass* StaticClass<UELCareerDebugInfoWidget>()
	{
		return UELCareerDebugInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerDebugInfoWidget(Z_Construct_UClass_UELCareerDebugInfoWidget, &UELCareerDebugInfoWidget::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerDebugInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerDebugInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
