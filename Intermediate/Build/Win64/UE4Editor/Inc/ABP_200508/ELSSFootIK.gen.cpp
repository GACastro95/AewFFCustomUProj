// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFootIK() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFootIK_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSFootIK();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFootIKParam();
// End Cross Module References
	static FName NAME_UELSSFootIK_CalcFootIKParam = FName(TEXT("CalcFootIKParam"));
	FSSFootIKParam UELSSFootIK::CalcFootIKParam()
	{
		ELSSFootIK_eventCalcFootIKParam_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSFootIK_CalcFootIKParam),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSFootIK_UpdateFloorIK = FName(TEXT("UpdateFloorIK"));
	bool UELSSFootIK::UpdateFloorIK()
	{
		ELSSFootIK_eventUpdateFloorIK_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSFootIK_UpdateFloorIK),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELSSFootIK::StaticRegisterNativesUELSSFootIK()
	{
	}
	struct Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFootIK_eventCalcFootIKParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSFootIKParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFootIK, nullptr, "CalcFootIKParam", nullptr, nullptr, sizeof(ELSSFootIK_eventCalcFootIKParam_Parms), Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSFootIK_eventUpdateFloorIK_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFootIK_eventUpdateFloorIK_Parms), &Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSFootIK, nullptr, "UpdateFloorIK", nullptr, nullptr, sizeof(ELSSFootIK_eventUpdateFloorIK_Parms), Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSFootIK_NoRegister()
	{
		return UELSSFootIK::StaticClass();
	}
	struct Z_Construct_UClass_UELSSFootIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableIK_MetaData[];
#endif
		static void NewProp_bEnableIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDrivingIK_MetaData[];
#endif
		static void NewProp_bEnableDrivingIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDrivingIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootBoneName_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneName_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootBoneName_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveRangeFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveRangeFromCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerDisabled_MetaData[];
#endif
		static void NewProp_bPlayerDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSFootIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSFootIK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSFootIK_CalcFootIKParam, "CalcFootIKParam" }, // 2409894478
		{ &Z_Construct_UFunction_UELSSFootIK_UpdateFloorIK, "UpdateFloorIK" }, // 1630998151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSFootIK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK_SetBit(void* Obj)
	{
		((UELSSFootIK*)Obj)->bEnableIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK = { "bEnableIK", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSFootIK), &Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK_SetBit(void* Obj)
	{
		((UELSSFootIK*)Obj)->bEnableDrivingIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK = { "bEnableDrivingIK", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSFootIK), &Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_CurrentParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_CurrentParam = { "CurrentParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFootIK, CurrentParam), Z_Construct_UScriptStruct_FSSFootIKParam, METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_CurrentParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_CurrentParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_L = { "FootBoneName_L", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFootIK, FootBoneName_L), METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_R = { "FootBoneName_R", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFootIK, FootBoneName_R), METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_ActiveRangeFromCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_ActiveRangeFromCamera = { "ActiveRangeFromCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSFootIK, ActiveRangeFromCamera), METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_ActiveRangeFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_ActiveRangeFromCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFootIK" },
		{ "ModuleRelativePath", "Public/ELSSFootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled_SetBit(void* Obj)
	{
		((UELSSFootIK*)Obj)->bPlayerDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled = { "bPlayerDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSFootIK), &Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bEnableDrivingIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_CurrentParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_FootBoneName_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_ActiveRangeFromCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSFootIK_Statics::NewProp_bPlayerDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSFootIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSFootIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSFootIK_Statics::ClassParams = {
		&UELSSFootIK::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSFootIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSFootIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSFootIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSFootIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSFootIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSFootIK, 3361147770);
	template<> ABP_200508_API UClass* StaticClass<UELSSFootIK>()
	{
		return UELSSFootIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSFootIK(Z_Construct_UClass_UELSSFootIK, &UELSSFootIK::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSFootIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSFootIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
