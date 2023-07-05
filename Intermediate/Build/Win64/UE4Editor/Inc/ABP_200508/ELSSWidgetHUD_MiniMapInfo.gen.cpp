// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_MiniMapInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_MiniMapInfo() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapInfo::execApplyAliveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InAliveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAliveCount(Z_Param_InAliveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapInfo::execApplyAreaShrinkTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAreaShrinkTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapInfo::execApplyKOCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InKOCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyKOCount(Z_Param_InKOCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_MiniMapInfo::execSetAreaShrinkTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaShrinkTime(Z_Param_InSecond);
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_MiniMapInfo::StaticRegisterNativesUELSSWidgetHUD_MiniMapInfo()
	{
		UClass* Class = UELSSWidgetHUD_MiniMapInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAliveCount", &UELSSWidgetHUD_MiniMapInfo::execApplyAliveCount },
			{ "ApplyAreaShrinkTime", &UELSSWidgetHUD_MiniMapInfo::execApplyAreaShrinkTime },
			{ "ApplyKOCount", &UELSSWidgetHUD_MiniMapInfo::execApplyKOCount },
			{ "SetAreaShrinkTime", &UELSSWidgetHUD_MiniMapInfo::execSetAreaShrinkTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics
	{
		struct ELSSWidgetHUD_MiniMapInfo_eventApplyAliveCount_Parms
		{
			int32 InAliveCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAliveCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::NewProp_InAliveCount = { "InAliveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapInfo_eventApplyAliveCount_Parms, InAliveCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::NewProp_InAliveCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo, nullptr, "ApplyAliveCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapInfo_eventApplyAliveCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics
	{
		struct ELSSWidgetHUD_MiniMapInfo_eventApplyAreaShrinkTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapInfo_eventApplyAreaShrinkTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo, nullptr, "ApplyAreaShrinkTime", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapInfo_eventApplyAreaShrinkTime_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics
	{
		struct ELSSWidgetHUD_MiniMapInfo_eventApplyKOCount_Parms
		{
			int32 InKOCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InKOCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::NewProp_InKOCount = { "InKOCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapInfo_eventApplyKOCount_Parms, InKOCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::NewProp_InKOCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo, nullptr, "ApplyKOCount", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapInfo_eventApplyKOCount_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics
	{
		struct ELSSWidgetHUD_MiniMapInfo_eventSetAreaShrinkTime_Parms
		{
			float InSecond;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::NewProp_InSecond = { "InSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_MiniMapInfo_eventSetAreaShrinkTime_Parms, InSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::NewProp_InSecond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo, nullptr, "SetAreaShrinkTime", nullptr, nullptr, sizeof(ELSSWidgetHUD_MiniMapInfo_eventSetAreaShrinkTime_Parms), Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_NoRegister()
	{
		return UELSSWidgetHUD_MiniMapInfo::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliveMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AliveMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeMinMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeMinMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeMinMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeMinMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeSecMaterial_10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeSecMaterial_10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeSecMaterial_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeSecMaterial_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkTimeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShrinkTimeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KO10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KO10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alive10Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Alive10Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShowShrinkTime_MetaData[];
#endif
		static void NewProp_IsShowShrinkTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShowShrinkTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAliveCount, "ApplyAliveCount" }, // 116471164
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyAreaShrinkTime, "ApplyAreaShrinkTime" }, // 2045407266
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_ApplyKOCount, "ApplyKOCount" }, // 1287096596
		{ &Z_Construct_UFunction_UELSSWidgetHUD_MiniMapInfo_SetAreaShrinkTime, "SetAreaShrinkTime" }, // 1928835766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_MiniMapInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_10 = { "KOMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KOMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_01 = { "KOMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KOMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_10 = { "AliveMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, AliveMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_01 = { "AliveMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, AliveMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_10 = { "ShrinkTimeMinMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeMinMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_01 = { "ShrinkTimeMinMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeMinMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_10 = { "ShrinkTimeSecMaterial_10", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeSecMaterial_10), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_01 = { "ShrinkTimeSecMaterial_01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeSecMaterial_01), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeWidget = { "ShrinkTimeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, ShrinkTimeWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KO10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KO10Widget = { "KO10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, KO10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KO10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KO10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Alive10Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Alive10Widget = { "Alive10Widget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Alive10Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Alive10Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Alive10Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Minutes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Minutes), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Seconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_MiniMapInfo, Seconds), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_MiniMapInfo" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_MiniMapInfo.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_MiniMapInfo*)Obj)->IsShowShrinkTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime = { "IsShowShrinkTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_MiniMapInfo), &Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KOMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_AliveMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeMinMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeSecMaterial_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_ShrinkTimeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_KO10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Alive10Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::NewProp_IsShowShrinkTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_MiniMapInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::ClassParams = {
		&UELSSWidgetHUD_MiniMapInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_MiniMapInfo, 1062472604);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_MiniMapInfo>()
	{
		return UELSSWidgetHUD_MiniMapInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_MiniMapInfo(Z_Construct_UClass_UELSSWidgetHUD_MiniMapInfo, &UELSSWidgetHUD_MiniMapInfo::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_MiniMapInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_MiniMapInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
