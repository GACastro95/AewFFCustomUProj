// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dSourceBaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dSourceBaseComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtom3dSourceBaseComponent::execSetRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_InRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_InRegion);
		P_NATIVE_END;
	}
	void UAtom3dSourceBaseComponent::StaticRegisterNativesUAtom3dSourceBaseComponent()
	{
		UClass* Class = UAtom3dSourceBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRegion", &UAtom3dSourceBaseComponent::execSetRegion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics
	{
		struct Atom3dSourceBaseComponent_eventSetRegion_Parms
		{
			UAtom3dRegion* InRegion;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion = { "InRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom3dSourceBaseComponent_eventSetRegion_Parms, InRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dSourceBaseComponent, nullptr, "SetRegion", nullptr, nullptr, sizeof(Atom3dSourceBaseComponent_eventSetRegion_Parms), Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputVolumeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultOutputVolumeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttenuationDistanceDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMinAttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMinAttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxAttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxAttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInteriorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultInteriorDistance;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultDistanceAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDistanceAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultDistanceAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugStringsForDetailsVisible_MetaData[];
#endif
		static void NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugStringsForDetailsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion, "SetRegion" }, // 2043327456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Atom3dSourceBaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale = { "DefaultOutputVolumeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputVolumeScale), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion = { "DefaultRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsAttenuationDistanceDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible = { "bIsAttenuationDistanceDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance = { "DefaultMinAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMinAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance = { "DefaultMaxAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMaxAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsOutputInteriorPanFieldDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible = { "bIsOutputInteriorPanFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius = { "DefaultSourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultSourceRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance = { "DefaultInteriorDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultInteriorDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultDistanceAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsDebugStringsForDetailsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible = { "bIsDebugStringsForDetailsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dSourceBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams = {
		&UAtom3dSourceBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dSourceBaseComponent, 3941066417);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dSourceBaseComponent>()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dSourceBaseComponent(Z_Construct_UClass_UAtom3dSourceBaseComponent, &UAtom3dSourceBaseComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtom3dSourceBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dSourceBaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
